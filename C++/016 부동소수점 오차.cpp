// �ε��Ҽ��� ���� ����
#include<iostream>

using namespace std;

int main()
{
	double d1(100 - 99.99);
	double d2(10 - 9.99);

	cout << d1 << endl;		// 0.01 ���
	cout << d2 << endl;		// 0.01 ���

	if (d1 == d2)
		cout << "Equal" << endl;
	else
	{
		if (d1 > d2) cout << "d1 > d2" << endl;		// �и� d1, d2�� ó���� 0.01�� ����ߴµ�, �� if/else������ "d1 > d2"�� ��µȴ�.
		else cout << "d1 < d2" << endl;
	}

	cout << std::abs(d1 - d2) << endl;		// 5.32907e -15		�ſ� ���� ��ġ�� ���̰� ����

	// ������� ������ġ�� ���̴� �����ϰ� ���ٰ� �Ǻ��ϴ� �ڵ�
	const double epsilon = 1e-10;			// �����Ҽ� �ִ� ������ const�� ����

	if (std::abs(d1 - d2) <= epsilon) cout << "Equal" << endl;	// ������ epsilon���� ���� ��� Equal
	else cout << "Not Equal" << endl;							// ������ epsilon���� Ŭ ��� not Equal


	return 0;
}