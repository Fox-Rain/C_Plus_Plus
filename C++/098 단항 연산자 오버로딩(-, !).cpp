#include<iostream>

using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0) // Cents 생성자  default parameter 0으로 초기화
	{
		m_cents = cents;
	}

	int getCents() const { return m_cents; } // m_cents 리턴 (const므로 복사하여 리턴)

	int &getCents() { return m_cents; } // m_cents 리턴 (참조로 그대로 리턴)

	Cents operator -() const // 단항연산자'-' 오버로딩
	{
		return Cents(-m_cents); // 익명객체를 리턴함.
	}

	bool operator !() const // 단항연산자 '!' 오버로딩
	{
		return (m_cents == 0) ? true : false; // m_cents가 0이면 1을 반환, 0이 아닐경우 0을 반환
	}

	friend std::ostream &operator<<(std::ostream &out, const Cents &c)
	{
		out << c.m_cents << endl;
		return out;
	}
};

int main()
{
	// Cents 클래스의 객체 선언
	Cents cents1(6);		// Cents의 객체 cents1 m_cents을 6으로 초기화 하고 선언
	Cents cents2(0);		// Cents의 객체 cents2 m_cents을 0으로 초기화 하고 선언

	// auto를 활용하여 단항연산자를 적용한 것에 대한 자료형 알아보기
	auto temp1 = cents1;						// auto가 cents1이 Cents클래스 객체므로 Cents형을 나타냄.
	auto temp2 = !cents1;						// auto가 !cnets1이 bool타입을 리턴하므로 bool형을 나타냄.

	// 단항 연산자 - 이용
	cout << cents1 << endl;						// 출력 연산자 오버로딩이 일어남.
	cout << -cents1 << endl;					// 출력 연산자 오버로딩 + 단항 연산자(-)가 일어남.

	// 단항 연산자 ! 이용
	cout << !cents1 << " " << !cents2 << endl;	// cents1은 6이므로 0이 아니기에 0을 반환, cents2는 0이므로 1을 반환해서   0 1 이 출력이 된다.

	return 0;
}