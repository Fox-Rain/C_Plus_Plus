#include<iostream>

using namespace std;

struct Rectangle		// ����ü Rectangle
{
	int length;
	int width;
};

int main()
{
	Rectangle rectangle_arr[10];				// ����ü�迭 ����[10]

	cout << sizeof(Rectangle) << endl;		// Rectangle ����ü�� ũ��� 8bytes �� ���
	cout << sizeof(rectangle_arr) << endl;	// ����ü �迭�̹Ƿ� 8x10 = 80bytes

	// ����ü �迭 �ʱ�ȭ
	rectangle_arr[0].length = 12;
	rectangle_arr[0].width = 123;
	rectangle_arr[1].length = 142;
	// .............
	return 0;
}