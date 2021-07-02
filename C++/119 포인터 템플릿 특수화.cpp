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
class A<T *> // T가 포인터일때   즉, 템플릿으로 포인터가 들어올때만으로 특수화
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