#include<iostream>
#include<cassert>

using namespace std;

class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:
	Fraction(int num = 0, int den = 1) // Fraction ������
		:m_numerator(num), m_denominator(den)
	{
		assert(den != 0);
	}

	Fraction(const Fraction &fraction) // ���� ������  (�Ű������� ���� �����ִ� Fraction��ü�� ������ ����)
		:m_numerator(fraction.m_numerator), m_denominator(fraction.m_denominator)
	{
		cout << "Copy constructor" << endl;
	}

	friend std::ostream &operator<<(std::ostream &out, const Fraction &f) // ������ << �����ε�
	{
		cout << f.m_numerator << " / " << f.m_denominator;
		return out;
	}
};

int main()
{
	Fraction frac(3, 5); // Ŭ���� ��ü�� �׳� �����ϹǷ� �����ڰ� �����
	Fraction frac_copy(frac); // Ŭ���� ��ü�� �����Ͽ� �����ϹǷ� ���� �����ڰ� �����
	// Fraction frac_copy=frac;   <- �̷������� Ÿ�����ص� ��������ڰ� ����ȴ�. (=��ȣ�ε� ��������ڰ� ȣ���)

	cout << frac << " " << frac_copy << endl; // �Ѵ� ���� ���� ��µȴ�.  3/5  3/5
	return 0;
}