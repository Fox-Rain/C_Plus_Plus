#include<iostream>

using namespace std;

template<class T> // class A�� T ���ø�ȭ
class A
{
private:
	T m_value;

public:
	A(const T &input)
		:m_value(input)
	{}

	template<typename TT> // Ŭ������ ����Լ� doSomething�� �ѹ��� TT�� ���ø�ȭ��
	void doSomething()
	{
		cout << typeid(T).name() << "  " << typeid(TT).name() << endl;
	}
};

int main()
{
	A<int> harang(1004);

	harang.doSomething<float>(); // doSomething �� �ٽ� ���ø�ȭ �Ǿ������Ƿ� doSomething�� ���� ��Ȯ�� ���ֱ� ���� <>�� �־���      int  float �� ��µȴ�.

	return 0;
}