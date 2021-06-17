#include<iostream>

using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0) // Cents 생성자    default parameter 0 
	{
		m_cents = cents;
	}

	operator int() // 형변환 오버로딩  int을 double로 바꾸면 double로 형변환 하여 리턴
	{
		cout << "cast here" << endl;
		return m_cents;
	}

	int getCents() { return m_cents; }

	void setCents(int cents) { m_cents = cents; }
};

void printInt(const int &value)
{
	cout << value << endl;
}

int main()
{
	Cents cts(7);

	printInt(cts); // 원래 그냥 printInt로는 객체를 출력할수 없는데, 위에 형변환 오버로딩을하여서 Cents의 객체를 int로 형변환 해주어
				   // 출력이 가능하게 만들어줌.

	return 0;
}