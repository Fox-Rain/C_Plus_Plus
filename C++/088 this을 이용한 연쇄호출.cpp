#include<iostream>

using namespace std;

class Calc
{
private:
	int m_value;

public:
	Calc(int init_value)
		:m_value(init_value)
	{}

	// return *this�� �ڱ��ڽ��� ���� ���۷����� ������  (this�� ��ü���ּ��ε� ��ü���ּҸ� dereference�ϹǷ� ��, ��ü�� ������ ������)
	Calc &add(int value) { m_value += value; return *this; }

	Calc &sub(int value) { m_value -= value; return *this; }

	Calc &mult(int value) { m_value *= value; return *this; }

	void print()
	{
		cout << m_value << endl;
	}
};

int main()
{
	Calc C(10);

	// Chainning member function <���� ȣ��>
	C.add(10).sub(2).mult(12).print(); // ������ Ŭ�����޼ҵ��� ���ϰ����� ��ü������ �����ϹǷ� ���������� �޼ҵ带 ȣ�� �� �� �ִ�. 
	// C.add(10); C.sub(2); C.mult(12); C.print();�� �����ϴ�.

	return 0;
}