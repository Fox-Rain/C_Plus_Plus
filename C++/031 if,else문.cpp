#include<iostream>

using namespace std;

int	min(int num1, int num2)	// min���� �����ϴ� �Լ�
{
	if (num1 > num2)		// if ()			()�� true�� ����
		return num2;
	else if (num1 < num2)	// else if ()		()�� true�鼭 ���� if()�� false�� ����
		return num1;
	else					// else				���� �ΰ��� �� false�� ����
		return 0;
}

int main()
{
	int a;
	cin >> a;

	int b;
	cin >> b;

	cout << min(a, b) << endl;

	return 0;
}