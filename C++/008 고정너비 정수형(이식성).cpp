// 고정너비 정수형		플렛폼마다 자료형의 크기의 차이가 있을 수 있는데 그것의 문제를 해결하기 위하여 이용한다.
// 어떠한 플렛폼에서도 똑같은 데이터 사이즈를 사용하도록 하는것이 고정너비 정수형이다.
#include<iostream>

using namespace std;

int main()
{
	std::int16_t i1 = 5;			// 16비트 즉 2바이트로 고정 short
	std::int8_t i2 = 65;			// 8비트 즉 1바이트로 고정 char

	cout << i2 << endl;				// 1바이트 char타입이므로 문자로 출력됨 'A'

	std::int_fast8_t i3 = 123;		// 1바이트 정수형 중 "가장빠른" 정수형
	std::int_least64_t i4 = 321;	// "적어도" 8바이트 사이즈를 갖는 정수형

	return 0;
}