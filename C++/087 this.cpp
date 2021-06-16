#include<iostream>

using namespace std;

class Simple
{
private: // private�̹Ƿ� int main()���� ���������� ������ �Ұ�����
	int m_id;

public: // public ���������� ����
	Simple(const int &id) // ������
	{
		setID(id); // �̷��� �����ڿ��� �Լ��� ȣ���� �� �ִ�.

		cout << this << endl; // *** this�� �ڱ��ڽ��� �ּҸ� �ǹ��Ѵ�. (��ü ������ ������ Ŭ������ü �ڱ��ڽ��� �ּҸ� �ǹ�)
	}

	void setID(const int &id) { m_id = id; }

	int getID() { return m_id; }
};

int main()
{
	Simple s1(1); // 003CF9E8
	Simple s2(2); // 003CF9DC

	cout << &s1 << endl; // 003CF9E8
	cout << &s2 << endl; // 003CF9DC

	// ������ ����غ��� �� �� �ֵ�, Ŭ���� ��ü�� �����ɶ� �ּҰ� ������. ( �����ڿ��� �ּҰ� ������.)

	return 0;
}