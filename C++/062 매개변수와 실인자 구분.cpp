// �Ű������� ������ ����
// �Լ����� �Ķ���Ͱ� ���� (������ ����) ���� �����ذ��� �ٸ����� �����ϴµ�, �Լ��� ������ ���ÿ� �����ؼ� �����ص� �޸𸮴� os�� �ݳ��� �ȴ�.
#include<iostream>

using namespace std;

int foo(int x, int y); // �Լ�����

int foo(int x, int y)  // �Լ�����
{
	return x + y;
}
// x and y are destroyed here. �Լ����� ���� �Ķ���� ���� �Լ��� ������ ���ÿ� OS�� �޸𸮰� �ݳ���. ��, ���尪�� �����.
// ��ġ �������� ���� ����.

int main()
{
	int x = 1;
	int y = 2;

	foo(6, 7);
	foo(x, y);

	return 0;
}