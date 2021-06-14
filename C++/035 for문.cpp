#include<iostream>

using namespace std;

int main()
{
	for (int i = 0; i <= 10; ++i)	// <for문 과정> 1. int i = 0; 초기화 한번하고 2. i<=10인지 판별한뒤 참이면 아래 { } 괄호 실행
	{								// 3. 실행후 i++를한뒤 2.3.과정을 반복한다.   ( int i=0; << 이 초기화 과정은 처음한번만 함. )
		cout << i << endl;			// for (int i = 0; i <= 10; i++) 여기서 i++ 대신 i += 2 라더지 i *= 3이라던지 여러 다른것들을 넣을 수도 있다.
	}

	for (int i = 0, int j = 0; i <= 10 || j <= 10; ++i, ++j)	// for문안에서 여러개의 변수를 선언할 수 있다.
	{
		cout << i << " " << j << endl;
	}

	return 0;
}