#include<iostream>

using namespace std;

auto add(int a, int b)			// auto�� �Լ����� ���ϰ��� �ڷ������� ����������, �Ķ������ �ڷ������δ� �Ұ����ϴ�. (�Ķ���ʹ� �ڷ����� ���ؾ���)
{
	return a + b;
}
int main()
{
	auto a = 1;
	auto b = 1.3f;
	auto c = 'A';
	auto d = 1.32;

	auto result = add(1, 2);	// �Լ��� ���ϰ��� �������� auto �� �� �ִ�.

	return 0;
}