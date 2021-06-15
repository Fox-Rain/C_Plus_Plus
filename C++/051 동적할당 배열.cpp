// 동적할당 배열      원래 배열의 경우 배열의 길이를 컴파일타임에서 const등으로 고정하여서 넣어줘야하는데, 동적할당을 하게되면 런타임에서 배열의 길이를 정할 수 있다.
#include<iostream>

using namespace std;

int main()
{
	int length;

	cin >> length;

	int *array = new int[length];

	for (int i = 0; i < length; ++i)
	{
		array[i] = i;
		cout << array[i] << endl;
	}
	return 0;

	delete[] array;            // delete[]을 통해서 배열주소 전체를 다시 os에게 전달해줌

	// int Array_1[] = {1,3,5,7};               // 배열길이 생략가능
	// int *Array_2 = new int[4]{1,3,5,7};      // new int로 배열을 동적할당할때에는 배열 길이는 꼭 써주어야한다. 생략이 불가능
	return 0;
}