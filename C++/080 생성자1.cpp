#include<iostream>

using namespace std;

class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:
	Fraction()  // 생성자  클래스명(){}   생성자를 타이핑을 아예안해두면 default생성자가 실행됨. 자체로 내장되어있는 default 생성자
	{
		m_numerator = 0;   // 생성자를 통해 default 초기화
		m_denominator = 1; // 생성자를 통해 default 초기화
		cout << "Welcome to Fraction !" << endl;
	}

	void print()
	{
		cout << m_numerator << "/" << m_denominator << endl;
	}
};

int main()
{
	Fraction fr; // 위에서 만들어둔 생성자가 실행됨
	fr.print();  // 0/1 출력

	return 0;
}