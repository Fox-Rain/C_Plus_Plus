#include<iostream>

using namespace std;

class B
{
private:
	int m_b;

public:
	B(const int &m_b_in) // B 생성자
		:m_b(m_b_in) // : .. 을 통해서 초기화할 수 있다.
	{}
};

class Something
{
private:
	int m_i;
	double m_d;
	char m_c;
	int m_array[5];
	B m_b;

public:
	Something()
		:m_i(1), m_d(3.14), m_c('a'), m_array{ 1,2,3,4,5 }, m_b(m_i - 1)
	{}

	void print()
	{
		cout << m_i << " " << m_d << " " << m_c << " ";
		for (auto &e : m_array)
			cout << e << " ";

		cout << endl;
	}
};

int main()
{
	Something some;

	some.print();

	return 0;
}