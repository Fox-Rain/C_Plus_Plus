#include<iostream>
#include<cmath>

using namespace std;

void addOne(int &x)   // ������ ����ü�� �Ѿ�Ƿ�, �Լ��� ������ ��ȭ�� int main()������ �����ȴ�.
{
	x += 1;
}

int main()
{
	int num = 1;

	cout << num << " " << &num << endl; // 1 00A4FE08

	addOne(num);

	cout << num << " " << &num << endl; // 2 00A4FE08

	return 0;
}