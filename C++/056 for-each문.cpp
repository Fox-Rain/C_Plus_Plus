#include<iostream>

using namespace std;

int main()
{
	int arr[] = { 1,3,5,7,9,11,13,15,17,19 };

	for (int num : arr)    // for(�ڷ��� ���� : �迭)    <<<< �迭�� ��ҵ��� ���������� ������ �����Ѵ�.   (Python�� for in �� ���� ����)
	{
		cout << num << endl;
	}

	// ������� �迭�� �� �ٲٱ�
	for (int &num : arr)   // ���Դ��� ������ ���������� �����Ѵ�.  ** �̷��߸� arr����ü�� �޾ƿ��� �����̴�. arr����ü�� �޾ƿ;� ���� �����ص� ��ȭ�� ���� �Ǳ� ����
	{
		num = 10;
	}

	for (int num : arr)   // ������ ������ ���� arr�� �ٲ�����Ƿ� 
	{
		cout << num << endl; // 10 10 10 10 10....  ���
	}
	return 0;
}