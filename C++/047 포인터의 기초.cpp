#include<iostream>

using namespace std;

struct Something		// padding ���� 4+4+4+4 = 16
{
	int a, b, c, d;
};

int main()
{
	int x = 5;
	int y = 3;

	// �����͸� �����Ҷ��� *�� ����,  de-reference�ؼ� ���� ������ ���� *�� ����.
	// ������ ����	--> �����;ȿ��� ���� �ڷ���  *�����͸� = ������ �ּ�;
	int *ptr_x = &x;
	int *ptr_y = &y;

	cout << ptr_x << " " << &x << " " << *ptr_x << endl;		// ptr_x �����ͺ��� ���� ���� x�� �ּ�			008FFBA8 008FFBA8 5
	cout << ptr_y << " " << &y << " " << *ptr_y << endl;		// ptr_y �����ͺ��� ���� ���� y�� �ּ�			008FFB9C 008FFB9C 3

	double d = 1.0;
	double *ptr_d = &d;		// �̷������� �����͵� �ȿ����� �ּ��� ���� �ڷ����� ���߾� �־���Ѵ�.

	cout << sizeof(&x) << " " << sizeof(&y) << " " << sizeof(&d) << endl;				// �ּ��� ũ��� ��� 4 4 4 �� ����.
	cout << sizeof(ptr_x) << " " << sizeof(ptr_y) << " " << sizeof(ptr_d) << endl;		// �����ʹ� �ּҸ� �ǹ��ϹǷ� ���� 4 4 4 �� ����.
	cout << sizeof(*ptr_x) << " " << sizeof(*ptr_y) << " " << sizeof(*ptr_d) << endl;	// de-refernece�ϸ� ���̹Ƿ� �ڷ����� ���� 4 4 8 ���

	// ����ü�� ������
	Something a;
	Something *ptr_a = &a;

	cout << sizeof(a) << endl;		// 16
	cout << sizeof(ptr_a) << endl;	// 4 ������(�ּ�)�Ƿ�

	return 0;
}