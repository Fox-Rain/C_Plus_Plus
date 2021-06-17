#include<iostream>

using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0) // Cents ������  default parameter 0���� �ʱ�ȭ
	{
		m_cents = cents;
	}

	int getCents() const { return m_cents; } // m_cents ���� (const�Ƿ� �����Ͽ� ����)

	int &getCents() { return m_cents; } // m_cents ���� (������ �״�� ����)

	Cents operator -() const // ���׿�����'-' �����ε�
	{
		return Cents(-m_cents); // �͸�ü�� ������.
	}

	bool operator !() const // ���׿����� '!' �����ε�
	{
		return (m_cents == 0) ? true : false; // m_cents�� 0�̸� 1�� ��ȯ, 0�� �ƴҰ�� 0�� ��ȯ
	}

	friend std::ostream &operator<<(std::ostream &out, const Cents &c)
	{
		out << c.m_cents << endl;
		return out;
	}
};

int main()
{
	// Cents Ŭ������ ��ü ����
	Cents cents1(6);		// Cents�� ��ü cents1 m_cents�� 6���� �ʱ�ȭ �ϰ� ����
	Cents cents2(0);		// Cents�� ��ü cents2 m_cents�� 0���� �ʱ�ȭ �ϰ� ����

	// auto�� Ȱ���Ͽ� ���׿����ڸ� ������ �Ϳ� ���� �ڷ��� �˾ƺ���
	auto temp1 = cents1;						// auto�� cents1�� CentsŬ���� ��ü�Ƿ� Cents���� ��Ÿ��.
	auto temp2 = !cents1;						// auto�� !cnets1�� boolŸ���� �����ϹǷ� bool���� ��Ÿ��.

	// ���� ������ - �̿�
	cout << cents1 << endl;						// ��� ������ �����ε��� �Ͼ.
	cout << -cents1 << endl;					// ��� ������ �����ε� + ���� ������(-)�� �Ͼ.

	// ���� ������ ! �̿�
	cout << !cents1 << " " << !cents2 << endl;	// cents1�� 6�̹Ƿ� 0�� �ƴϱ⿡ 0�� ��ȯ, cents2�� 0�̹Ƿ� 1�� ��ȯ�ؼ�   0 1 �� ����� �ȴ�.

	return 0;
}