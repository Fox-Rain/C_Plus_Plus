#include<iostream>
#include<cassert>

using namespace std;

class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:
	Fraction(int num = 0, int den = 1) // Fraction 생성자
		:m_numerator(num), m_denominator(den)
	{
		assert(den != 0);
	}

	Fraction(const Fraction &fraction) // 복사 생성자  (매개변수로 원래 생겨있는 Fraction객체를 참조로 받음)
		:m_numerator(fraction.m_numerator), m_denominator(fraction.m_denominator)
	{
		cout << "Copy constructor" << endl;
	}

	friend std::ostream &operator<<(std::ostream &out, const Fraction &f) // 연산자 << 오버로딩
	{
		cout << f.m_numerator << " / " << f.m_denominator;
		return out;
	}
};

int main()
{
	Fraction frac(3, 5); // 클래스 객체를 그냥 생성하므로 생성자가 실행됨
	Fraction frac_copy(frac); // 클래스 객체를 복사하여 생성하므로 복사 생성자가 실행됨
	// Fraction frac_copy=frac;   <- 이런식으로 타이핑해도 복사생성자가 실행된다. (=등호로도 복사생성자가 호출됨)

	cout << frac << " " << frac_copy << endl; // 둘다 같은 값이 출력된다.  3/5  3/5
	return 0;
}