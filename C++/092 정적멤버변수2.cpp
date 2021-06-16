// 정적 멤버 함수는 마찬가지로 공유하는 함수이며 클래스객체가 아무것도 선언되지 않아도 Something:: 로 접근이 가능하다.
// 단, 정적 멤버 함수안에선 this-> 을 일체 사용할 수 없다.
#include<iostream>

using namespace std;

class Something
{
private: // private 외부접근 불가
	static int s_value; // 정적멤버변수 선언
	int m_value;

public:
	static int getValue() // 정적멤버 함수  <-- 여기서도 물론 공유된 정적멤버변수를 사용할 수 있다.
	{
		return s_value; // static member function에서는  this-> 를 사용할 수 없다.
		// return m_value; <<<< 불가능.  즉 , 정적멤버함수는 정적멤버변수만 사용이 가능하다.
	}
};

int Something::s_value = 1; // 정적멤버변수 초기화

int main()
{
	//cout << Something::s_value << endl;    <<< private로 static int s_value;를 선언하였기에 정적멤버 변수여도 외부에서 접근이 불가능.
	cout << Something::getValue() << endl; // public:의 getValue()함수를 통해 private s_value에 간접적으로 접근하여 호출 할 수 있다

	return 0;
}