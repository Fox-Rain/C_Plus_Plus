#include<iostream>

using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0) // Cents ������    default parameter 0 
	{
		m_cents = cents;
	}

	operator int() // ����ȯ �����ε�  int�� double�� �ٲٸ� double�� ����ȯ �Ͽ� ����
	{
		cout << "cast here" << endl;
		return m_cents;
	}

	int getCents() { return m_cents; }

	void setCents(int cents) { m_cents = cents; }
};

void printInt(const int &value)
{
	cout << value << endl;
}

int main()
{
	Cents cts(7);

	printInt(cts); // ���� �׳� printInt�δ� ��ü�� ����Ҽ� ���µ�, ���� ����ȯ �����ε����Ͽ��� Cents�� ��ü�� int�� ����ȯ ���־�
				   // ����� �����ϰ� �������.

	return 0;
}