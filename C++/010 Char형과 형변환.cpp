// 문자는 실제로는 숫자로 저장이 된다.
#include<iostream>

using namespace std;

int main()
{
	char c1(65);
	char c2('A');		// C++ 에서는 문자 하나는 ''   문자열은 ""

	cout << c1 << " " << c2 << endl;
	cout << char(65) << endl;			// char타입은 숫자도 문자로 바꾸어 출력한다.
	cout << int('A') << endl;

	// static_cast 형변환  <앞에서의 형변환과는 약간의 차이가 있다>
	// static_cast <바꿀 목표 자료형> (값) 
	cout << static_cast<char>(65) << endl;
	cout << static_cast<int>('A') << endl;

	return 0;
}