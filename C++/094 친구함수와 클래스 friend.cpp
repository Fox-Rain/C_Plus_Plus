#include<iostream>

using namespace std;

class A
{
private:
	int m_value = 1;

	friend void print(A &a); // friend�� �ܺ��Լ��� ģ���� �Ծ��ָ� private���̶� �ܺο��� ģ������ �Լ����� ����� �� �ִ�.

	friend class B; // class B ��ü �� ģ�� �Ծ��༭ class B���� A���� private�� ������ ����
	//  friend void B::doSomething(A& a);   // �̷������� Class B�� �κ����ΰ��� ģ���Ծ��� ���� ����.
};

class B
{
private:
	int m_value = 2;

public:
	void doSomething(A &a)
	{
		cout << a.m_value << endl; // class A�� B�� ģ���Ծ���� ������ A�� m_value(private�ӿ���)���� ������ ��������
	}
};

void print(A &a) // Ŭ���� A�� ģ������ �Լ��⿡ private���� �ܺ��ε� �̿밡��
{
	cout << a.m_value << endl;
}

int main()
{
	A a;
	print(a);

	B b;
	b.doSomething(a);
	return 0;
}