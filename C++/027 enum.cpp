#include<iostream>

using namespace std;
// enum �ȿ� ������� �빮�ڷ� ���´�.
enum Color				// enum�� 0���� �����Ͽ��� ���������� ���� +1�� Ŀ����.
{
	COLOR_BLACK,		// 0
	COLOR_RED,			// 1
	COLOR_BLUE = 23,	// 23 (23���� ���������Ƿ� 23)
	COLOR_GREEN			// 24 (23���� +1�� 24)
};

int main()
{
	Color house(COLOR_BLUE);
	Color apple(COLOR_RED);

	cout << COLOR_BLACK << endl;	// 0
	cout << COLOR_RED << endl;		// 1
	cout << COLOR_BLUE << endl;		// 23
	cout << COLOR_GREEN << endl;	// 24

	return 0;
}