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

	// prefix	���� ������
	Digit &operator++()
	{
		++m_digit;
		return *this;
	}

	// postfix	���� ������
	Digit &operator ++(int) // int�� dummy�� �־ parameter�� �ٸ��� �Ͽ� ����,���� �������� �����ε��� �Ѵ�. (�Լ��� �Ķ���ͷ� ����)
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
	cout << d << endl; // 7     �տ� ���������ڿ� ���� 7�� �Ǿ����Ƿ� 7�� ��µ�
	return 0;
}