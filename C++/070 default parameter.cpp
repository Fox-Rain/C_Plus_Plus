#include<iostream>

using namespace std;

void print(int x = 1024) // (int x = 1024) default parameter�� 1024�� ������.   ��, �μ��� ������ �ȵɽÿ� x�� 1024�� ����
{
	cout << x << endl;
}

// default parameter�� �����Ҷ� ������ ��
void print2(int x, int y, int z = 23) {} // ����Ʈ �Ķ���͸� ä�ﶧ�� ������ �����ʺ��� ä���־���Ѵ�.


// �Լ��� ����� ���Ǹ� �и��ϰ� default parameter�� �����ҋ� ������ ��
void print3(int x = 12, int y = 24, int z = 123); // ���� ����Ʈ���� �����ϰ�

void print3(int x, int y, int z) // ���ǿ��� ����Ʈ�� ������ ���� �ʾƾ� �Ѵ�. (���ʿ��� ����Ʈ ���� �ʾ��־�� ��)
{
	cout << x << " " << y << " " << z << endl;
}

int main()
{
	print(10);
	print();  // �ƹ��͵� �μ��� ���� �ʾ����Ƿ� default�� 1024 ���

	return 0;
}