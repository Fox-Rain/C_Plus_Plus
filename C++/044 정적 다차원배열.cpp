// ���� ������ �迭
#include<iostream>

using namespace std;

int main()
{
	const int num_rows = 3;
	const int num_colums = 5;

	int arr[num_rows][num_colums] =
	{
		{1,2,3,4,5},		// row 0
		{6,7,8,9,10},		// row 1
		{11,12,13,14,15}	// row 2
	};

	for (int i = 0; i < num_rows; ++i)
	{
		for (int j = 0; j < num_colums; ++j)		// ����Ϻ��� �� �� �ֵ� �������̶�� ������ �������̴�. �������� ��� ���������� ���̴°�.
		{											// row�� �ٲ� 4����Ʈ ���̾����� �� �̾��� �ִ�.
			cout << arr[i][j] << " ";
			cout << (int)&arr[i][j] << "     ";
		}
		cout << endl;
	}

	// 3���� array
	//int my_array[3][4][5];			................... 4�� 5�� ...........

	return 0;
}