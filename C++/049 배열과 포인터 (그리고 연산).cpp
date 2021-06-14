#include<iostream>

using namespace std;

void printArray(int array[])			// 4����Ʈ�� ��µ�	(�Լ����� �Ķ���ͷ� �迭�� ���������� �����ͷ� �޴´�.)
{										// ���� ������ array �״�� �ͼ� 20����Ʈ�ϰ� ������ 
	cout << sizeof(array) << endl;		// �Լ��� �Ķ���ͷ� ���� �� ���������� �����ͷ� ó���ϱ� ������ 4����Ʈ�� ũ�⸦ ���´�.
}										// ******** ��, ����ü���� ��쿣 ���ο��� ������ ó���� ��������  ��, sizeof(array)�� �״�� �迭��ŭ�� ũ�⸦ ���� ********

int main()
{
	int my_arr[] = { 1,2,3,4,5 };

	cout << *my_arr << endl;		// my_arr�� my_arr[0]�� �ּ�,	"�迭�� �������̹Ƿ� de_reference�Ͽ� ���� ������ �� �ִ�."


	printArray(my_arr);				// 4 �� ��µ�	(�迭�� �Ķ���ͷ� ������ �Լ����������� �����ͷ� ó���ϱ� ������ 4bytes�� ũ�⸦ ����

	// �����ͷ� �� �ٲٱ�
	*my_arr = 3;
	cout << my_arr[0] << endl;	// 3 ���

	// ������ ����
	int *ptr = my_arr;

	cout << *ptr << " " << *(ptr + 1) << endl;	//	1 2 ��µ�		(ptr+1)���ϰԵǸ� [0]���� [1]�� �Ѿ�� �ȴ�.

	// 4�� �ּҰ� ���̳�. ��, int���̹Ƿ� 4����Ʈ �� �ּҰ� ���̰� ���°��� �� �� �ִ�.
	cout << int(ptr - 1) << endl;
	cout << int(ptr) << endl;
	cout << int(ptr + 1) << endl;

	int array[5] = { 9,7,5,3,1 };

	// �迭���� ���������� �ּҰ� 4����Ʈ�� ���̳�  int���̹Ƿ� 4����Ʈ�� �ּ� ���̰� ����.
	cout << int(&array[0]) << endl;
	cout << int(&array[1]) << endl;
	cout << int(&array[2]) << endl;
	cout << int(&array[3]) << endl;
	cout << int(&array[4]) << endl;

	// �迭�� �����Ϳ� ���� ������ �̿밡��.
	char name[] = "Jack jack";

	const int n_name = sizeof(name) / sizeof(char);

	for (int i = 0; i < n_name; ++i)
	{
		cout << *(name + i);		// �迭�� ������ó�� �̿밡��. (Jack jack �� ��µ�)
	}

	return 0;
}