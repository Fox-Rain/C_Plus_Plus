#include<iostream>

using namespace std;

int main()
{
	int num;
	cin >> num;

	switch (num)
	{
		int a;	// 주의할점>>> switch문 안에서는 변수 선언은 가능하나,		변수 초기화는 불가능하다. Ex) int a = 5; 불가능

	case 0:
	{
		int a = 3;	// case문 안에서는 변수 초기화도 가능!		case 0 지역의 지역변수 a가 초기화된것이다.
		cout << a << " " << &a << endl;
		break;
	}
	case 1:
	{
		a = 5;	// 여기서의 a는 선언/초기화가 된것이 아니기 때문에 맨처음 나온 switch문에서 선언된 a를 의미한다.
		cout << a << " " << &a << endl;
		break;
	}
	default: cout << "Undefined input!" << endl;	// default: 즉, 앞의 케이스가 모두 아닐경우 (else) 실행함
	}

	return 0;
}