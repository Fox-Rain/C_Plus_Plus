#include<iostream>

using namespace std;

class Second
{
public:
	Second()
	{
		cout << "class Second constructor()!" << endl;
	}
};

// 클래스안에 클래스를 맴버로 넣을 경우   ( 멤버가 먼저 초기화되는건 당연하므로 맴버로 들어간 클래스가 먼저 호출됨)
class First
{
	Second sec;   // First클래스 안에 Second클래스를 갖는 sec라는 인스턴스를 선언해서 넣어줌.

public:
	First()
	{
		cout << "class First constructor()!" << endl;
	}
};

int main()
{
	First fs; // 처음으로 First클래스안에 Second sec;로 초기화가 먼저 실행되어서  Second() 생성자의 "class Second constructor()"가 출력되고,
			  // Frist() 생성자가 실행되어 class First constructor()"가 출력된다.
	return 0;
}