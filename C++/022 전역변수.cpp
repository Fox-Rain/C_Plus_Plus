#include<iostream>

using namespace std;

int value = 1;	// �������� value

int main()
{
	cout << value << " " << &value << endl;		// 1 0027C000	�������� value�� �ּ�

	int value = 2;								// �������� value
	cout << value << " " << &value << endl;		// 2 012FFE88	�������� value�� �ּҷμ� (���������� �ٸ���)

	// ::�������� �̿��ϸ� ���������� int main()�ȿ��� �̿��� �� �ִ�.
	cout << ::value << " " << &::value << endl;	// 1 0027c000	���������� �ҷ���

	return 0;
}