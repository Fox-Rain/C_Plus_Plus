// ����� �Լ� ȣ��    ��ʹ� �����ս��� �߿���Ҷ����� ������� �ʴ°��� ����. (�����ս��� �ſ� ������)
#include<iostream>

using namespace std;

void countDown(int count) // count ���� �ϳ��� �پ��� ���� ����ϴ� �Լ�
{
	cout << count << endl;
	if (count > 0)
		countDown(count - 1);   // "����� �Լ� ȣ��"    �Լ��ȿ��� �ڱ��ڽ��� ȣ����  <����� �Լ��� ȣ���ҽ� ������ ������ �� ������ �־���Ѵ�. �ȱ׷��� ���ѷ���>
}

int sumTo(int num) // num���� ���������� �ڿ����� ���ϴ� �Լ�
{
	if (num <= 0) return 0;
	else if (num <= 1) return 1;
	else return sumTo(num - 1) + num;
}

int main()
{
	countDown(10);
	cout << sumTo(12) << endl;

	return 0;
}