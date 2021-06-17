#include<iostream>
#include<cassert>

using namespace std;

class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:
	Fraction(int num = 0, int den = 1) // 생성자
		:m_numerator(num), m_denominator(den)
	{
		assert(den != 0);
	}

	Fraction(const Fraction &fraction) // 복사 생성자
		:m_numerator(fraction.m_numerator), m_denominator(fraction.m_denominator)
	{
		cout << "copy constructor called" << endl;
	}

	friend ostream &operator<<(ostream &out, const Fraction &f)
	{
		out << f.m_numerator << " / " << f.m_denominator << endl;
		return out;
	}
};

void doSomething(Fraction frac)
{
	cout << frac << endl;
}

int main()
{
	Fraction frac(7, 1);

	doSomething(frac); // 1. frac은 원래 선언되있던것이므로 복사생성자가 호출됨 2. doSomething 함수가 호출되는데 그안에 << 연산자가		
					   // 연산자 오버로딩되어있는 것이므로 3. 연산자 오버로딩 함수를 다시 호출함.
					   // 따라서 copy constructor called 7/1 이 출력되게 된다.


	doSomething(Fraction(2, 3));

	return 0;
}