#include<iostream>

using namespace std;

class Digit
{
private:
	int m_digit;

public:
	Digit(int digit = 0)
		:m_digit(digit)
	{}

	// prefix	전위 연산자
	Digit &operator++()
	{
		++m_digit;
		return *this;
	}

	// postfix	후위 연산자
	Digit &operator ++(int) // int로 dummy를 넣어서 parameter을 다르게 하여 전위,후위 연산자의 오버로딩을 한다. (함수를 파라미터로 구분)
	{
		Digit temp(m_digit);
		++(*this);
		return temp;
	}

	friend ostream &operator<<(ostream &out, const Digit &d)
	{
		cout << d.m_digit;
		return out;
	}
};

int main()
{
	Digit d(5);

	cout << ++d << endl; // 6
	cout << d++ << endl; // 6
	cout << d << endl; // 7     앞에 후위연산자에 의해 7이 되었으므로 7이 출력됨
	return 0;
}