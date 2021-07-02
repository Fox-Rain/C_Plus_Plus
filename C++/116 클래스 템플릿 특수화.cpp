#include<iostream>
#include<array>
#include<bitset>

// class templaet specialition�� �׳� ���ο� Ŭ�����ϳ��� �� ����ٰ� ���� �����ϴ�.
using namespace std;

template<typename T>
class A
{
public:
	void doSomething()
	{
		cout << typeid(T).name() << endl; // Ÿ�Ը��� ���
	}

	void test()
	{}
};

// Ŭ���� ���ø� Ư��ȭ //
template<>
class A<string> // <string>���ø����� ��ü�� ���� ������ �� Ŭ���� ��� ��ü�� ����     �ٸ���ü��� ���� �ȴ�.
{
public:
	void doSomething()
	{
		cout << "Warning!: string type" << "    ";
		cout << typeid(string).name() << endl;
	}

	// non test function //
};



template<class T>
class Storage8
{
private:
	T m_array[8];

public:
	void set(int index, const T &value)
	{
		m_array[index] = value;
	}

	const T &get(int index)
	{
		return m_array[index];
	}
};

template<>
class Storage8<bool> // boolŸ���� Ŭ���� ���ø� Ư��ȭ
{
private:
	unsigned char m_data;

public:
	Storage8()
		:m_data(0)
	{}

	void set(int index, bool value)
	{
		unsigned char mask = 1 << index;

		if (value)
			m_data |= mask;
		else
			m_data &= ~mask;
	}

	bool get(int index)
	{
		unsigned char mask = 1 << index;
		return (m_data & mask) != 0;
	}
};

int main()
{
	A<int> a_int;
	A<double> a_double;
	A<string> a_string; // <string> ���ø� Ư��ȭ�� ��ü�� ����

	a_int.doSomething();
	a_double.doSomething();
	a_string.doSomething();

	a_int.test();
	// a_string.test();   <- string���ø��� Ŭ������ ������� ������ test�Լ��� �� �� ����.  ��, �׳� ������ �ٸ� ��ü��� �����ϸ� �ȴ�.

	return 0;
}