#include<iostream>

using namespace std;

int main()
{
	int x = 5;

	cout << x << endl;		// 5
	cout << &x << endl;		// 00D3F95C

	// de-reference operator (*)란?
	// 포인터가 데이터가 있는 주소를 가지고 있는거라면, 디리퍼런스는 직접적으로 그 주소에 접근하는 것을 의미한다.
	cout << *&x << endl;	// 5		(&x는 00D3F95C인 주소(x의 값이 들어이는 변수의 주소)를 de-reference하여서 직접 값으로 접근하므로 5가 나오게된다.

	return 0;
}