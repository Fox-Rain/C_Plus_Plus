#include<iostream>	// cout, cin, endl.. ���� �������Ͽ� include
#include<cstdio>	// printf, scanf ���� �������Ͽ� include

using namespace std;

int main()
{
	cout << "hello world" << endl;		// endl;�� �ٹٲ��� �Ѵ�.  '\n'���ε� �ٹٲ��� �����ѵ�,	endl�� \n�� �ణ�� �������� �ִ�.
	cout << "hello world";				// �̷������� endl;�� ���������� �ٹٲ��� �Ͼ�� �ʴ´�.

	int x = 1024;
	double pi = 3.141592;

	cout << "x is " << x << " pi is " << pi << endl;	// ���ڿ� ��½ÿ� "" ���� ��½ô� �׳�

	cout << "abc" << "\t" << "def" << endl;				// "\t"�� �̿��ϸ� tab��ŭ ��°� �Ӿƴ϶� ���� ���߾� �ִ� ����� �Ѵ�.
	cout << "ab" << "\t" << "cdef" << endl;				// abc	def
														// ab	cdef	 <<< �̷������� �ٲ��.

	cout << "\a";		// ���Ҹ��� ����Ѵ�.			

	return 0;
}