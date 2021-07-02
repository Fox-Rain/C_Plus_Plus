#include<iostream>
#include<array>
#include<bitset>

// class templaet specialition은 그냥 새로운 클래스하나가 더 생긴다고 봐도 무방하다.
using namespace std;

template<typename T>
class A
{
public:
	void doSomething()
	{
		cout << typeid(T).name() << endl; // 타입명을 출력
	}

	void test()
	{}
};

// 클래스 템플릿 특수화 //
template<>
class A<string> // <string>템플릿으로 객체를 만들 때에는 이 클래스 대로 객체가 생성     다른객체라고 보면 된다.
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
class Storage8<bool> // bool타입형 클래스 템플릿 특수화
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
	A<string> a_string; // <string> 템플릿 특수화된 객체로 생성

	a_int.doSomething();
	a_double.doSomething();
	a_string.doSomething();

	a_int.test();
	// a_string.test();   <- string템플릿된 클래스로 만들었기 때문에 test함수를 쓸 수 없다.  즉, 그냥 완전히 다른 객체라고 생각하면 된다.

	return 0;
}