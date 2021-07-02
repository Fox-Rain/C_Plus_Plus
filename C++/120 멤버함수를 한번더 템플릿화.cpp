#include<iostream>

using namespace std;

template<class T> // class A를 T 템플릿화
class A
{
private:
	T m_value;

public:
	A(const T &input)
		:m_value(input)
	{}

	template<typename TT> // 클래스의 멤버함수 doSomething을 한번더 TT로 템플릿화함
	void doSomething()
	{
		cout << typeid(T).name() << "  " << typeid(TT).name() << endl;
	}
};

int main()
{
	A<int> harang(1004);

	harang.doSomething<float>(); // doSomething 에 다시 템플릿화 되어있으므로 doSomething에 대해 명확히 해주기 위해 <>을 넣어줌      int  float 가 출력된다.

	return 0;
}