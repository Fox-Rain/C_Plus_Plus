// �ι��̻� �ݺ��� �� �Լ��� ���� �ߺ��� �����ϴ°��� ����.
#include<iostream>

using namespace std;

int add_Two_Numbers(int num1, int num2)		// <�Լ��� �⺻ ����>		�����ϴ� �ڷ��� �Լ��� (parameter) { }   
{
	int sum = num1 + num2;
	
	return sum;
}

void print_Hello_World()					// ���Լ��� ��� ���ϰ��� ���� (������ �־��� ���� ����) ���� �����ϴ� �ڷ����� void�� ������
{
	cout << "Hello world" << endl;
}

int main()
{
	cout << add_Two_Numbers(1, 2) << endl;		// 1,2�� �Ķ���ͷ� ���� �������� 3�� ���ϵǰ� �װ��� ��µǹǷ�		3 ���

	print_Hello_World();						// Hello world ���

	return 0;
}