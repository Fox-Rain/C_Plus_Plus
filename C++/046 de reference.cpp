#include<iostream>

using namespace std;

int main()
{
	int x = 5;

	cout << x << endl;		// 5
	cout << &x << endl;		// 00D3F95C

	// de-reference operator (*)��?
	// �����Ͱ� �����Ͱ� �ִ� �ּҸ� ������ �ִ°Ŷ��, ���۷����� ���������� �� �ּҿ� �����ϴ� ���� �ǹ��Ѵ�.
	cout << *&x << endl;	// 5		(&x�� 00D3F95C�� �ּ�(x�� ���� ����̴� ������ �ּ�)�� de-reference�Ͽ��� ���� ������ �����ϹǷ� 5�� �����Եȴ�.

	return 0;
}