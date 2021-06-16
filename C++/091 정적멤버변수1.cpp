#include<iostream>

using namespace std;

class Something
{
public:                 // 스테틱맴버는 헤더에 두면 안되고 CPP파일 안에 정의해야 한다.
	static int s_value; // 정적 멤버변수는 클래스안에서 선언만 가능하다.  즉, static int s_value=1024; 이런식으로 초기화가 불가능
};

int Something::s_value = 1; // 이런식으로 초기화는 함수 밖에서 해주어야 한다.

int main()
{
	// 아래의 코드를 실행해보면 알 수 있듯, 정적멤버변수는 클래스 객체를 만들어 주지 안아도 존재함. 그자체가 다른곳에 따로 저장되어 있음
	// 정적멤버변수는 하나로 여러 객체에 공유된다. (따로 선언된 클래스 객체에서 이용해도 정적멤버변수의 주소는 일치하는 것을 보면 알 수 있다.)
	cout << &Something::s_value << " " << Something::s_value << endl; // 00007FF6EEB9D010 1

	Something some1;
	Something some2;

	// 이렇게 다른 객체로 불러와서 값을 바꾸어도 하나의 정적멤버변수만 바뀜.
	some1.s_value = 2;
	some2.s_value = 3;

	cout << &some1.s_value << " " << some1.s_value << endl; // 00007FF6EEB9D010 3
	cout << &some2.s_value << " " << some2.s_value << endl; // 00007FF6EEB9D010 3

	Something::s_value = 1024; // 이런식으로 클래스객체를 통하지 않고, 직접 접근하여서 바꿀 수도 있다.

	cout << &Something::s_value << " " << Something::s_value << endl; // 00007FF6EEB9D010 1024

	return 0;
}