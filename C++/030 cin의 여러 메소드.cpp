// std::cin.fail()		�Է¿� �����ߴ���, �����ߴ����� ���� 0,1 ��ȯ��. (�������п��δ� �ڷ����� �´°�, �����÷ο찡 �߻����� �ʾҴ°� ��..)
// std::cin.clear()		�����÷��׸� �ʱ�ȭ�ϴ� ��� cin.fail()�� 1�� �Ȱ���  �ʱ�ȭ��.
// std::cin.ignore( , ) �Է°���ŭ or �Է��ѹ��ڸ� ������ �װ͵��� �ϴ� ���ۿ��� ������.		std::cin.ignore(���� ���� ��, ������ ���� ����) <<< ���ۿ� �ִ� ���� ����.
// cin.fail() < Error flag >�� ���ؼ� if / else���� �����Ű�� ���� ����.
#include<iostream>

using namespace std;

int getInt()	// ���� �Է¹޴� �Լ�
{
	while (1)
	{
		cout << "Enter a integar number" << endl;

		int num;
		cin >> num;		// �������̸� num�� ���� \n�� ���ۿ� ���� ���̰�, �����ʴ� �ڷ����� ��� �Է¹��ۿ� ��� ���� ���̴�.

		if (std::cin.fail())	// ����� �Է��� �ȉ��� ��			std::cin.fail()�� �Է¿� ������ 0, �Է¿� ���н� 1 ��ȯ		< Error flag >
		{
			std::cin.clear();	// std::cin.fail()==1�� �Ȱ��� �ʱ�ȭ��Ŵ cin.fail()=0���� �ٲ�
			std::cin.ignore(32767, '\n');	// \n (���ٶ��)�� ���������� 32767��° ���۱��� �д´�.

			cout << "Invaild number, Please try again" << endl;
		}
		else		// �Է��� ����� ���� ��
		{
			std::cin.ignore(32767, '\n');	// �������� ����� �����Ƿ�, \n �� ���ۿ��� �������.

			return num;
		}
	}
}

char getOperator()
{
	cout << "Enter an operator" << endl;

	while (1)
	{
		char oper;
		cin >> oper;

		std::cin.ignore(32767, '\n');

		if (oper == '+' || oper == '-' || oper == '*' || oper == '/') return oper;

		else cout << "Invaild operator, Please try again" << endl;
	}
}

void print_Result(int num1, int num2, char oper)
{
	switch (oper)
	{
	case '+':
		cout << num1 + num2 << endl;
		break;
	case '-':
		cout << num1 - num2 << endl;
		break;
	case '*':
		cout << num1 * num2 << endl;
		break;
	case '/':
		cout << num1 / num2 << endl;
		break;
	}
}

int main()
{
	int num1 = getInt();
	char oper = getOperator();
	int num2 = getInt();

	print_Result(num1, oper, num2);

	return 0;
}