// 논리연산자 And(&&)는 앞이 참이 아니라면 뒤는 확인할 필요가 없으므로 실행하지 않고 나가버린다.
// 논리연산자는 &&가 ||보다 우선순위가 높다.	()괄호를 잘 사용하는것이 중요하다.
// and(&&)	or(||)
#include<iostream>

using namespace std;

int main()
{
	int x = 2;
	int y = 2;

	if (x == 1 && y++ == 3)		// 여기서 x는 2므로 x==1에서 부터 false므로 뒤 y++ == 3은 실행되지 않는다.
	{
		int dummy;
	}

	cout << y << endl;			// 따라서 y++ == 3은 실행되지 않기 때문에 y는 그대로 2가 출력된다.

	return 0;
}