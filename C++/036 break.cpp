#include<iostream>

using namespace std;

void break_Or_Return()
{
	while (1)
	{
		char c;
		cin >> c;

		if (c == 'b')
			break;			// �ڽ��� ���� ���� �������´�.	���⼱ while(1){}�� ��������
		else if (c == 'r')
			return;			// return �� �Լ��� ���͹�����. �ƿ�
	}

	cout << "Break!" << endl;
}

int main()
{
	break_Or_Return();

	return 0;
}