#include<iostream>

using namespace std;

int main()
{
	int num;
	cin >> num;

	switch (num)		// swtich���� �Է¿� �´� case�� ã�Ƽ� �����ϰ�, �� �ڿ� case�� ����ؼ� ������. Ex) num==1�̾ case 1�� ���� �����ϸ� 2,3�� ��� ������.
	{					// ���� �´� case������ �ϳ��� �����ϱ� �ٶ��ٸ� ������ switch���� �������� break;�� �ɾ��־�� �Ѵ�.
	case 0:
		cout << "zero";
		// break;
	case 1:
		cout << "One";
		// break;
	case 2:
		cout << "Two";
		// break;
	case 3:
		cout << "Three";
		// break;
	}
	cout << endl;

	return 0;
}