#include<iostream>

using namespace std;

class A
{
private:
	int m_value = 1;

	friend void print(A &a); // friend로 외부함수와 친구를 먹어주면 private값이라도 외부에서 친구먹은 함수에선 사용할 수 있다.

	friend class B; // class B 전체 랑 친구 먹어줘서 class B에서 A값에 private도 접근이 가능
	//  friend void B::doSomething(A& a);   // 이런식으로 Class B의 부분적인곳만 친구먹어줄 수도 있음.
};

class B
{
private:
	int m_value = 2;

public:
	void doSomething(A &a)
	{
		cout << a.m_value << endl; // class A가 B랑 친구먹어줬기 때문에 A의 m_value(private임에도)에도 접근이 가능해짐
	}
};

void print(A &a) // 클래스 A와 친구먹은 함수기에 private값도 외부인데 이용가능
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