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

	// return *this로 자기자신의 값을 래퍼런스로 리턴함  (this는 객체의주소인데 객체의주소를 dereference하므로 즉, 객체를 참조로 리턴함)
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

	// Chainning member function <연쇄 호출>
	C.add(10).sub(2).mult(12).print(); // 위에서 클래스메소드의 리턴값으로 객체참조를 리턴하므로 연속적으로 메소드를 호출 할 수 있다. 
	// C.add(10); C.sub(2); C.mult(12); C.print();와 동일하다.

	return 0;
}