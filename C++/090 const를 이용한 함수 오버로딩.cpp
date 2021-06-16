// const�� �̿��� �Լ� �����ε�
#include<iostream>
#include<string>

using namespace std;

class Something
{
public:
	string m_value = "default";

	// const�� �ڿ� ���̳� �Ⱥ��̳ķε� �����ε�(�����̸��� �Լ��� ����ϱ�) �� �����ϴ�. ( �Ű��������� ���Ƶ� ����.)
	const string &getValue() const
	{
		cout << "const" << endl;
		return m_value;
	}

	string &getValue()
	{
		cout << "non-const" << endl;
		return m_value;
	}
};

int main()
{
	Something something;
	something.getValue(); // non-const   something�� �ʱ�ȭ�� const�� ������ �ʾұ� ������ const�� ���� getValue()�Լ��� ȣ��ȴ�.

	const Something something2;
	something2.getValue(); // const  something2�� �ʱ�ȭ�� const�� �������Ƿ� const�� �ִ� getValue()�Լ��� ȣ��ȴ�.

	return 0;
}