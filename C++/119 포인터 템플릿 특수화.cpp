#include<iostream>

using namespace std;

template <typename T>
class A
{
private:
	T m_value;

public:
	A(const T &input)
		:m_value(input)
	{}

	void print()
	{
		cout << m_value << endl;
	}
};

template <typename T>
class A<T *> // T�� �������϶�   ��, ���ø����� �����Ͱ� ���ö������� Ư��ȭ
{
private:
	T *m_value;

public:
	A(T *input)
		:m_value(input)
	{}

	void print()
	{
		cout << "Pointer: ";
		cout << m_value << "  ";
		cout << *m_value << endl;
	}
};

int main()
{
	A<int> a_int(123);
	a_int.print();

	int Temp = 3;

	A<int *> a_int_ptr(&Temp);
	a_int_ptr.print();

	return 0;
}