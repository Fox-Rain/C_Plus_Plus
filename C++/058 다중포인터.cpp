#include<iostream>

using namespace std;

int main()
{
	int *ptr = nullptr;
	int **ptrptr = nullptr;  // ** ���� ������

	int value = 5;

	ptr = &value;
	ptrptr = &ptr;  // value�� �ּҸ� �������ִ� ���� ptr�� �ּҸ� ������

	cout << ptrptr << "    " << *ptrptr << "    " << **ptrptr << endl; // �����ͺ����� �ּ�    value������ �ּ�    5     ( **�� de-reference�� �ι����� ��)

	return 0;
}