// namespace�� ����ϰ� �Ǹ�, �ߺ��Ǵ� ������,�Լ����� ����� �� �ִ�.
#include<iostream>

namespace work1
{
	int a = 1;

	int doSomething()
	{
		return a += 3;
	}
}

namespace work2
{
	int a = 10;

	int doSomething()
	{
		return a += 10;
	}
}

int main()
{
	using namespace std;

	cout << work1::a << endl;				// work1�� a�� ���� ���				1 ���
	cout << work1::doSomething() << endl;	// work1�� doSomething() 1+3			4 ���

	cout << work2::a << endl;				// work2�� a�� ���� ���			    10 ���
	cout << work2::doSomething() << endl;	// work2�� doSometing() 10+10		20 ���
	return 0;
}