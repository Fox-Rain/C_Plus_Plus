#include<iostream>

using namespace std;

int main()
{
	int num;
	cin >> num;

	switch (num)
	{
		int a;	// ��������>>> switch�� �ȿ����� ���� ������ �����ϳ�,		���� �ʱ�ȭ�� �Ұ����ϴ�. Ex) int a = 5; �Ұ���

	case 0:
	{
		int a = 3;	// case�� �ȿ����� ���� �ʱ�ȭ�� ����!		case 0 ������ �������� a�� �ʱ�ȭ�Ȱ��̴�.
		cout << a << " " << &a << endl;
		break;
	}
	case 1:
	{
		a = 5;	// ���⼭�� a�� ����/�ʱ�ȭ�� �Ȱ��� �ƴϱ� ������ ��ó�� ���� switch������ ����� a�� �ǹ��Ѵ�.
		cout << a << " " << &a << endl;
		break;
	}
	default: cout << "Undefined input!" << endl;	// default: ��, ���� ���̽��� ��� �ƴҰ�� (else) ������
	}

	return 0;
}