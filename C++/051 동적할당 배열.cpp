// �����Ҵ� �迭      ���� �迭�� ��� �迭�� ���̸� ������Ÿ�ӿ��� const������ �����Ͽ��� �־�����ϴµ�, �����Ҵ��� �ϰԵǸ� ��Ÿ�ӿ��� �迭�� ���̸� ���� �� �ִ�.
#include<iostream>

using namespace std;

int main()
{
	int length;

	cin >> length;

	int *array = new int[length];

	for (int i = 0; i < length; ++i)
	{
		array[i] = i;
		cout << array[i] << endl;
	}
	return 0;

	delete[] array;            // delete[]�� ���ؼ� �迭�ּ� ��ü�� �ٽ� os���� ��������

	// int Array_1[] = {1,3,5,7};               // �迭���� ��������
	// int *Array_2 = new int[4]{1,3,5,7};      // new int�� �迭�� �����Ҵ��Ҷ����� �迭 ���̴� �� ���־���Ѵ�. ������ �Ұ���
	return 0;
}