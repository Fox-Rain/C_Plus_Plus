// �Ϲ��ʱ�ȭ vs static�ʱ�ȭ		(static ���������� ó���� ���ѹ��� �ʱ�ȭ�� ��ġ�� ���Ŀ��� ���� �����Ѵ�.)
#include<iostream>

using namespace std;

void doSomething()
{
	int a = 1;

	++a;
	cout << a << endl;
}

void static_doSomething()
{
	static int a = 1;		// ù���� ���ѹ��� �ʱ�ȭ�� ����ȴ�.

	++a;
	cout << a << endl;
}

int main()
{
	// ����ؼ� doSomething()�� �����Ҷ����� int a=1;�� 1�� ��� �ʱ�ȭ�Ǳ� ������ 2�� ��µȴ�.
	doSomething();			// 2 ���
	doSomething();			// 2 ���
	doSomething();			// 2 ���

	// static_doSomething()�� static_int a=1;�� �Ǿ��ֱ� ������ �� �ѹ��� �ʱ�ȭ�� ����ȴ� ���� �Ʒ��� ���� ����� ��Ÿ����.
	static_doSomething();	// 2 ���
	static_doSomething();	// 3 ���
	static_doSomething();	// 4 ���

	return 0;
}