// 일반초기화 vs static초기화		(static 정적변수는 처음의 단한번의 초기화만 거치고 이후에는 값을 유지한다.)
#include<iostream>

using namespace std;

void doSomething()
{
	int a = 1;

	++a;
	cout << a << endl;
}

void static_doSomething()
{
	static int a = 1;		// 첫실행 단한번만 초기화가 실행된다.

	++a;
	cout << a << endl;
}

int main()
{
	// 계속해서 doSomething()을 실행할때마다 int a=1;로 1로 계속 초기화되기 때문에 2만 출력된다.
	doSomething();			// 2 출력
	doSomething();			// 2 출력
	doSomething();			// 2 출력

	// static_doSomething()은 static_int a=1;로 되어있기 때문에 딱 한번만 초기화가 실행된다 따라서 아래와 같은 결과가 나타난다.
	static_doSomething();	// 2 출력
	static_doSomething();	// 3 출력
	static_doSomething();	// 4 출력

	return 0;
}