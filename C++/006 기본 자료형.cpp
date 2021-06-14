#include<iostream>

using namespace std;

int main()
{
	bool bvalue = false;		// 불리언형	true == 1,	false == 0 으로 참/거짓을 저장한다.
	char cvalue = 65;			 
	float fvalue = 3.141592f;	// float의 경우 대입하는 숫자뒤에 f를 붙여서 double과 구별한다.
	double dvalue = 3.141592;	

	// auto 자료형 (알아서 효율적인 자료형으로 맞추어준다.)
	auto avalue1 = 3.141592f;	// float가 됨
	auto avalue2 = 3.141592;	// double이 됨

	cout << (bvalue ? 1 : 0) << endl;	// bvalue는 false니까 0 이 출력됨.		삼항연산자는 조건이 참이면 첫번째것을 거짓이면 두번째것을 리턴
	cout << cvalue << endl;				// cvalue는 숫자(65)로 초기화 하였으나 문자로 출력된다. *** char타입은 문자도 숫자로 저장한다.
	cout << fvalue << endl;				// 디폴트로 6자리수까지만 반올림하여 출력된다.
	cout << dvalue << endl;				// 디폴트로 6자리수까지만 반올림하여 출력된다.

	// 여러 초기화 방법 //
	int a = 123;
	int b(123);
	int c{ 123 };

	return 0;
}