#include<iostream>

using namespace std;

int main()
{
	int one_score;			// 1 variable
	int students_score[5];	// 5 variable (array)

	cout << sizeof(one_score) << endl;		// int��			4 bytes
	cout << sizeof(students_score) << endl;	// int�� 5��	   20 bytes

	students_score[0] = 95;
	students_score[1] = 90;
	students_score[2] = 85;
	students_score[3] = 10;
	students_score[4] = 70;

	for (int i = 0; i < sizeof(students_score) / sizeof(int); ++i)			// �迭�� �ּҸ� ���� (int)4byte�� �������ִ°��� �� �� �ִ�. �ֳ��ϸ� �迭�� �پ��ֱ⶧���̴�.
	{																		// 95    006FFD3C
		cout << students_score[i] << "    " << &students_score[i] << endl;	// 90    006FFD40
	}																		// 85    006FFD44
																			// 10    006FFD48
																			// 70    006FFD4C

	// �迭��ü�� ���� �迭�� �ּҰ��� ��ġ�Ѵ�. (���� �迭�� �ּҰ��� �迭[0]�� �ּҰ��� ����.)
	cout << students_score << "    " << &students_score << endl;			// 006FFD3C    006FFD3C

	// �ι�° �迭 �ʱ�ȭ ���
	int my_arr[5] = { 1,13,2,5,10 };	// my_arr[0]�� 1, [1]�� 13, [2]�� 2, [3]�� 5..... �̷������� ���������� �迭�� �ʱ�ȭ�ȴ�.
	// { } �αٿ� ����� �ʱ�ȭ�� ������ ä���ٸ� �����Ϸ��� �˾Ƽ� �о��ֹǷ� []�ȿ� ���ڴ� ������ ��.  Ex) int my_arr[]={1,13,2,5,10};

	return 0;
}