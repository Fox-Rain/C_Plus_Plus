#include<iostream>

using namespace std;

class A
{
private:
	int m_x;

public:
	A(int x)
		:m_x(x)
	{
		if (x <= 0) // �����ڸ� �����Ҷ� ������ ���� x�� 0���� �� ���
			throw 1; // 1�� throw��
	}
};

class B : public A // class B�� A�� ��ӹ���  ��, �����ڿ����� throw�� ��ӹްԵ�
{
public:
	//B(int x)
	//	:A(x)
	//{}

	// *** ������ �ȿ��� catch�ϱ����ؼ� try�Լ� ���
	B(int x)  // ***** �����ھȿ��� catch�� �ϰԵǸ� ������ �ȿ����� throw�� �ް�, �����Լ����� 1���� catch�� �ϰԵȴ�.
		try :A(x)
	{}
	catch (...)
	{
		cout << "catch in B constructor" << endl;
		// throw
	}
};

void doSomething()
{
	try
	{
		throw - 1;
	}
	catch (...)
	{
		cout << "Catch in doSomething()" << endl;
	}
}

int main()
{
	try
	{
		doSomething();
	}
	catch (...) // doSomething ���� �����Ƿ� ������� ����
	{
		cout << "Catch in main()" << endl;
	}

	try
	{
		B b(0); // ******* ������Ѻ��� b�� throw error�� �����ڿ�, �����Լ� �ΰ��� �ްԵȴ�. 
	}
	catch (...)
	{
		cout << "catch in main()" << endl;
	}

	return 0;
}