#include<iostream>

using namespace std;

int main()
{
	int arr[] = { 1,3,5,7,9,11,13,15,17,19 };

	for (int num : arr)    // for(자료형 변수 : 배열)    <<<< 배열의 요소들을 순차적으로 변수에 대입한다.   (Python의 for in 문 같은 느낌)
	{
		cout << num << endl;
	}

	// 순서대로 배열의 값 바꾸기
	for (int &num : arr)   // 대입당할 변수를 참조변수로 선언한다.  ** 이래야만 arr그자체를 받아오기 때문이다. arr그자체를 받아와야 값을 대입해도 변화가 유지 되기 때문
	{
		num = 10;
	}

	for (int num : arr)   // 위에서 참조를 통해 arr이 바뀌었으므로 
	{
		cout << num << endl; // 10 10 10 10 10....  출력
	}
	return 0;
}