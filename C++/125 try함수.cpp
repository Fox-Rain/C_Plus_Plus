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
		if (x <= 0) // 생성자를 실행할때 들어오는 인자 x가 0이하 일 경우
			throw 1; // 1을 throw함
	}
};

class B : public A // class B는 A를 상속받음  즉, 생성자에서의 throw도 상속받게됨
{
public:
	//B(int x)
	//	:A(x)
	//{}

	// *** 생성자 안에서 catch하기위해서 try함수 사용
	B(int x)  // ***** 생성자안에서 catch를 하게되면 생성자 안에서도 throw를 받고, 메인함수에서 1번더 catch를 하게된다.
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
	catch (...) // doSomething 에서 잡히므로 실행되지 않음
	{
		cout << "Catch in main()" << endl;
	}

	try
	{
		B b(0); // ******* 실행시켜보면 b의 throw error를 생성자와, 메인함수 두곳에 받게된다. 
	}
	catch (...)
	{
		cout << "catch in main()" << endl;
	}

	return 0;
}