// continue�� { }�� ���������� ���� �ƴ϶�		continue�ڿ� ������ �ǳʶٰ� �ǵڷΰ���.
#include<iostream>

using namespace std;

int main()
{
	for (int i = 1; i <= 10; ++i)
	{
		if (i % 2 == 1) continue;		// i�� 2�γ��������� �������� ������, Ȧ���Ƿ� continue�� ���� �ڿ� cout�� ������� �ʰ� ++i�� �ǳʶڴ�.
		cout << "¦��: " << i << endl;
	}
	// continue ���� �������� >>> ���� �Ǽ��� count++���� ������ �Ѿ�� �ǹ�����, ���ѷ����� ���� �� ������ �����ؾ��Ѵ�.
	return 0;
}