// namespace을 사용하게 되면, 중복되는 변수명,함수명을 사용할 수 있다.
#include<iostream>

namespace work1
{
	int a = 1;

	int doSomething()
	{
		return a += 3;
	}
}

namespace work2
{
	int a = 10;

	int doSomething()
	{
		return a += 10;
	}
}

int main()
{
	using namespace std;

	cout << work1::a << endl;				// work1의 a의 값을 출력				1 출력
	cout << work1::doSomething() << endl;	// work1의 doSomething() 1+3			4 출력

	cout << work2::a << endl;				// work2의 a의 값을 출력			    10 출력
	cout << work2::doSomething() << endl;	// work2의 doSometing() 10+10		20 출력
	return 0;
}