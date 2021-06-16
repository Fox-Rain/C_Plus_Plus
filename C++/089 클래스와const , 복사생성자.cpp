#include<iostream>

using namespace std;

class Something
{
public:
	int m_value = 0;

	Something(const Something &s) // ���� ������ << ���������� ��������ڸ� ���� �Ѱ��̰� default���� �����ڴ� ���� ����Ǿ� �ִ�. (�������ʰ� ����Ǿ�����)
	{
		m_value = s.m_value;

		cout << "Copy Constructor" << endl;
	}

	Something() // �Ϲ� ������
	{
		cout << "Constructor" << endl;
	}

	void setValue(int value)
	{
		m_value = value;
	}

	int getValue() const // const�� ������ Ŭ���� ��ü���� �̿��� �� �ֵ��� �Լ� ���� �ڿ� const�� �ٿ���
	{                    // const�� �����Ϸ����� "���� �������� �ٲ����ʴ� �Լ���" �ϰ� �˷��ִ°Ͱ� ����.
		return m_value;  // *** ���� �ȹٲٴ� �Լ��� �� const�� ���ƹ����°��� ���� 
	}
};

void print(Something s) // �Լ����� Ŭ������ü�� ���������� �μ��� ���������� ���� �����ؼ� �����ش�.
{
	cout << s.getValue() << endl;
	cout << &s << endl; // �����ؼ� ���� ���̹Ƿ� main�ȿ����� s�� �ּҿ� �ٸ���.
}

int main()
{
	const Something something; // const�� Ŭ������ü�� �����ϰԵǸ�, �Լ��� ���� ���� �ٲٷ��� ���� ��� �Ұ����ϰ� �ȴ�.
							   // Ŭ���� �ȿ��� ���� �ٲ����ʴ� �Լ��߿� const�� ���� �Լ��� �̿��� �� �ִ�.
	cout << &something << endl;

	print(something); // �Լ� �Ķ���ͷ� Ŭ���� ��ü�� �������� "���������"�� ����� (��������ڵ� ����Ʈ�� ������ �ʰ� �����ϸ�, ����ڰ� ��������ڸ� ���� �����ϸ�
					  // �ٸ� ����Ʈ ���� �����ڴ� ������� �ȴ�.)
	return 0;
}