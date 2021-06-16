// 정적 멤버 변수를 '클래스 안'에서 초기화 하는법.
#include<iostream>

using namespace std;

class Something
{
	class _init // 이너클래스  클래스안에 클래스 생성
	{
	public:
		_init() // 생성자
		{
			s_value = 123; // s_value를 초기화 할수 있다.
		}
	};

private:
	static int s_value;
	int m_value;

	static _init s_initializer;

public:
	static int getValue()
	{
		return s_value;
	}
};

int Something::s_value;
Something::_init Something::s_initializer;

int main()
{
	cout << Something::getValue() << endl;

	return 0;
}