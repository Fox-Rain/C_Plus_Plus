#include<iostream>

using namespace std;

int value = 1;	// 전역변수 value

int main()
{
	cout << value << " " << &value << endl;		// 1 0027C000	전역변수 value의 주소

	int value = 2;								// 지역변수 value
	cout << value << " " << &value << endl;		// 2 012FFE88	지역변수 value의 주소로서 (전역변수와 다르다)

	// ::변수명을 이용하면 전역변수를 int main()안에서 이용할 수 있다.
	cout << ::value << " " << &::value << endl;	// 1 0027c000	전역변수를 불러옴

	return 0;
}