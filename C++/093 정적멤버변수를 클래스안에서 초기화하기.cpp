// ���� ��� ������ 'Ŭ���� ��'���� �ʱ�ȭ �ϴ¹�.
#include<iostream>

using namespace std;

class Something
{
	class _init // �̳�Ŭ����  Ŭ�����ȿ� Ŭ���� ����
	{
	public:
		_init() // ������
		{
			s_value = 123; // s_value�� �ʱ�ȭ �Ҽ� �ִ�.
		}
	};

private:
	static int s_value;
	int m_value;

	static _init s_initializer;

public:
	static int getValue()
	{
		return s_value;
	}
};

int Something::s_value;
Something::_init Something::s_initializer;

int main()
{
	cout << Something::getValue() << endl;

	return 0;
}