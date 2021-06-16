#include<iostream>

using namespace std;

class Something
{
public:
	int m_value = 0;

	Something(const Something &s) // 복사 생성자 << 인위적으로 복사생성자를 정의 한것이고 default복사 생성자는 원래 내재되어 있다. (보이지않게 저장되어있음)
	{
		m_value = s.m_value;

		cout << "Copy Constructor" << endl;
	}

	Something() // 일반 생성자
	{
		cout << "Constructor" << endl;
	}

	void setValue(int value)
	{
		m_value = value;
	}

	int getValue() const // const로 고정된 클래스 객체에서 이용할 수 있도록 함수 선언 뒤에 const를 붙여줌
	{                    // const는 컴파일러에게 "나는 변수값을 바꾸지않는 함수야" 하고 알려주는것과 같다.
		return m_value;  // *** 값을 안바꾸는 함수는 다 const로 막아버리는것이 좋다 
	}
};

void print(Something s) // 함수에서 클래스객체도 마찬가지로 인수로 보낼때에는 값을 복사해서 보내준다.
{
	cout << s.getValue() << endl;
	cout << &s << endl; // 복사해서 들어온 것이므로 main안에서의 s의 주소와 다르다.
}

int main()
{
	const Something something; // const로 클래스객체를 고정하게되면, 함수던 뭐던 값을 바꾸려는 것은 모두 불가능하게 된다.
							   // 클래스 안에서 값을 바꾸지않는 함수중에 const가 붙은 함수만 이용할 수 있다.
	cout << &something << endl;

	print(something); // 함수 파라미터로 클래스 객체가 들어갈때에는 "복사생성자"가 실행됨 (복사생성자도 디폴트로 보이지 않게 존재하며, 사용자가 복사생성자르 따로 생성하면
					  // 다른 디폴트 복사 생성자는 사라지게 된다.)
	return 0;
}