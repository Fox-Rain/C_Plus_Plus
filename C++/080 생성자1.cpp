#include<iostream>

using namespace std;

class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:
	Fraction()  // ������  Ŭ������(){}   �����ڸ� Ÿ������ �ƿ����صθ� default�����ڰ� �����. ��ü�� ����Ǿ��ִ� default ������
	{
		m_numerator = 0;   // �����ڸ� ���� default �ʱ�ȭ
		m_denominator = 1; // �����ڸ� ���� default �ʱ�ȭ
		cout << "Welcome to Fraction !" << endl;
	}

	void print()
	{
		cout << m_numerator << "/" << m_denominator << endl;
	}
};

int main()
{
	Fraction fr; // ������ ������ �����ڰ� �����
	fr.print();  // 0/1 ���

	return 0;
}