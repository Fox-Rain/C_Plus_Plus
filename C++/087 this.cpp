#include<iostream>

using namespace std;

class Simple
{
private: // private이므로 int main()에서 직접적으로 접근이 불가능함
	int m_id;

public: // public 직접접근이 가능
	Simple(const int &id) // 생성자
	{
		setID(id); // 이렇게 생성자에서 함수를 호출할 수 있다.

		cout << this << endl; // *** this는 자기자신의 주소를 의미한다. (객체 생성시 생성된 클래스객체 자기자신의 주소를 의미)
	}

	void setID(const int &id) { m_id = id; }

	int getID() { return m_id; }
};

int main()
{
	Simple s1(1); // 003CF9E8
	Simple s2(2); // 003CF9DC

	cout << &s1 << endl; // 003CF9E8
	cout << &s2 << endl; // 003CF9DC

	// 위에서 출력해보면 알 수 있듯, 클래스 객체가 생성될때 주소가 정해짐. ( 생성자에서 주소가 정해짐.)

	return 0;
}