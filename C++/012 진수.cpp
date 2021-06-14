#include<iostream>

using namespace std;

int main()
{
	int a = 012;			// 숫자앞에 0을 붙이면 8진수라는 의미
	cout << a << endl;		// 10 출력

	int b = 0xF;			// 숫자앞에 0x을 붙이면 16진수라는 의미
	cout << b << endl;		// 15 출력

	int c = 0b1010;			// 숫자앞에 0b을 붙이면 2진수라는 의미		<이진수로 나타땐 가독성을 위해 1010'1011'1001 이런식으로 가독성을 위해 추가해도 됨>
	cout << c << endl;		// 10 출력

	return 0;
}