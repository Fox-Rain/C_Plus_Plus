// �����ε��̶�?       �Ķ������ ������ ������ �ٸ��� �Ͽ��� ���� �̸��� �Լ��� ����/���� �ϴ� ���� ���Ѵ�.
#include<iostream>
#include<string>

using namespace std;

// add�� �̸��� ���� �Լ��� �����ε�
int add(int x, int y) // add �Լ� int��
{
	return x + y;
}

double add(double x, double y) // add�Լ� double��
{
	return x + y;
}



void print(const char *value) {}   // ****   char*�� �ٸ������Ϳ� �ٸ��� ���ڿ��� �Է¹޴´�. (���ڿ��� �Է��ϸ� �ּҷ� ����) ���� " "�� ���ڷ� �־ �Է��� ���� �� �ִ�.
								   //        ���� ���ڿ��� char�����ͷ� ������ const�� �� ����������Ѵ�.
void print(int value) {}

int main()
{
	// �����Ϸ��� �˾Ƽ� �Լ��� �����Ͽ��� ������ ���ش�.
	add(1, 2);     // �μ��� int���̹Ƿ� int�� add ȣ��
	add(3.0, 2.0); // �μ��� double���̹Ƿ� double�� add ȣ��


	print(0);
	print("a");

	return 0;
}