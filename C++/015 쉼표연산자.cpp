#include<iostream>

using namespace std;

int getPrice(bool onsale)
{
	if (onsale) return 10;
	else return 100;
}

int main()
{
	// Comma operator ( ������ ������ �ϴ� ��ǥ�� �ƴ� "������"�μ��� �޸� )
	// �޸������ڴ� �켱������ ���� ���̴�.
	int x = 3;
	int y = 10;
	int z = (++x, ++y);		// �޸� �������� ��� �� ������ ���� �����Ѵ�. ��, ���⼱ z�� 11�� ���Եȴ�.

	cout << x << " " << y << " " << z << endl;	// 4 11 11�� ��µ�.		���⼭ �� ���ִ°��� int z = (++x,++y); ���⼭ ���õǴ°��� ++y�� �ϳ��� ���õ�����.
												// "++x , ++y �Ѵ� ������ �ȴ�."

	const int price = getPrice(true);			// �̷������� const�� if���� ���� ���� ���� �� ���� �ִ�. (��Ÿ�ӿ��� ������ �� �� o )

	return 0;
}