#include<iostream>

using namespace std;

void printArray(int array[])			// 4바이트가 출력됨	(함수에서 파라미터로 배열을 받을때에는 포인터로 받는다.)
{										// 봤을 때에는 array 그대로 와서 20바이트일것 같지만 
	cout << sizeof(array) << endl;		// 함수는 파라미터롤 받을 때 내부적으로 포인터로 처리하기 때문에 4바이트의 크기를 갖는다.
}										// ******** 단, 구조체같은 경우엔 내부에서 포인터 처리가 되지않음  즉, sizeof(array)시 그대로 배열만큼의 크기를 갖음 ********

int main()
{
	int my_arr[] = { 1,2,3,4,5 };

	cout << *my_arr << endl;		// my_arr는 my_arr[0]의 주소,	"배열은 포인터이므로 de_reference하여 값을 가져올 수 있다."


	printArray(my_arr);				// 4 가 출력됨	(배열을 파라미터로 받을때 함수내부적으로 포인터로 처리하기 때문에 4bytes의 크기를 갖음

	// 포인터로 값 바꾸기
	*my_arr = 3;
	cout << my_arr[0] << endl;	// 3 출력

	// 포인터 연산
	int *ptr = my_arr;

	cout << *ptr << " " << *(ptr + 1) << endl;	//	1 2 출력됨		(ptr+1)을하게되면 [0]에서 [1]로 넘어가게 된다.

	// 4씩 주소가 차이남. 즉, int형이므로 4바이트 씩 주소가 차이가 나는것을 알 수 있다.
	cout << int(ptr - 1) << endl;
	cout << int(ptr) << endl;
	cout << int(ptr + 1) << endl;

	int array[5] = { 9,7,5,3,1 };

	// 배열또한 마찬가지로 주소가 4바이트씩 차이남  int형이므로 4바이트씩 주소 차이가 난다.
	cout << int(&array[0]) << endl;
	cout << int(&array[1]) << endl;
	cout << int(&array[2]) << endl;
	cout << int(&array[3]) << endl;
	cout << int(&array[4]) << endl;

	// 배열도 포인터와 같은 원리로 이용가능.
	char name[] = "Jack jack";

	const int n_name = sizeof(name) / sizeof(char);

	for (int i = 0; i < n_name; ++i)
	{
		cout << *(name + i);		// 배열도 포인터처럼 이용가능. (Jack jack 이 출력됨)
	}

	return 0;
}