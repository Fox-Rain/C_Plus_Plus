#include<iostream>

using namespace std;

void doSomething(int x)
{
	cout << x << "    " << &x << endl;
}
int main()
{
	// �Ʒ��� ��°����� ���� �˰����� ��� �Լ������� 006FFAC8�� ���� x�ּҿʹ� �ٸ���. �ֳ��ϸ� �Լ����� �� ����� �ͼ� �ٸ� ������ ����Ǳ� �����̴�. ���� �Լ��� ������ os�� ��ȯ
	doSomething(5); // 5    006FFAC8

	int x = 6;
	cout << x << "    " << &x << endl; // 6    006FFB9C   <<< int main()���� x���� x�ּ�

	doSomething(x); // 6    006FFAC8
	doSomething(x + 1); // 7    006FFAC8

	return 0;
}