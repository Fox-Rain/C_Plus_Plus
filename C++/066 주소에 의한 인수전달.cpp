#include<iostream>

using namespace std;

void foo(int *ptr)  // �Ķ���ͷ� ������(�ּ�)�� ����
{
	cout << *ptr << " " << ptr << " " << &ptr << endl;
}

void foo(double degrees, double *sin_out, double *cos_out) // �Ķ���Ϳ� �����͸� �����ؼ� ���� ������ ������ �� �� �ִ�.
{
	*sin_out = 1.0;
	*cos_out = 2.0;
}

int main()
{
	int value = 5;

	cout << value << " " << &value << endl;

	int *ptr_v = &value;

	foo(ptr_v);
	foo(&value);

	int value = 5;

	cout << value << " " << &value << endl;

	int *ptr = &value;

	cout << &ptr << endl;

	double degrees = 30;
	double sin, cos;

	foo(degrees, &sin, &cos);						// �Լ��� �����ͷ� �����ϱ� �ּҷ� ���������. (������ �����ִ��� �����ͷ� �����ִ���)

	cout << sin << " " << cos << endl;
	return 0;
}