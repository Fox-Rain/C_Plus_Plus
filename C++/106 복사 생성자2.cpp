#include<iostream>
#include<cassert>

using namespace std;

class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:
	Fraction(int num = 0, int den = 1) // ������
		:m_numerator(num), m_denominator(den)
	{
		assert(den != 0);
	}

	Fraction(const Fraction &fraction) // ���� ������
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

	doSomething(frac); // 1. frac�� ���� ������ִ����̹Ƿ� ��������ڰ� ȣ��� 2. doSomething �Լ��� ȣ��Ǵµ� �׾ȿ� << �����ڰ�		
					   // ������ �����ε��Ǿ��ִ� ���̹Ƿ� 3. ������ �����ε� �Լ��� �ٽ� ȣ����.
					   // ���� copy constructor called 7/1 �� ��µǰ� �ȴ�.


	doSomething(Fraction(2, 3));

	return 0;
}