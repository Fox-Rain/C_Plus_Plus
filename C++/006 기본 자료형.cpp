#include<iostream>

using namespace std;

int main()
{
	bool bvalue = false;		// �Ҹ�����	true == 1,	false == 0 ���� ��/������ �����Ѵ�.
	char cvalue = 65;			 
	float fvalue = 3.141592f;	// float�� ��� �����ϴ� ���ڵڿ� f�� �ٿ��� double�� �����Ѵ�.
	double dvalue = 3.141592;	

	// auto �ڷ��� (�˾Ƽ� ȿ������ �ڷ������� ���߾��ش�.)
	auto avalue1 = 3.141592f;	// float�� ��
	auto avalue2 = 3.141592;	// double�� ��

	cout << (bvalue ? 1 : 0) << endl;	// bvalue�� false�ϱ� 0 �� ��µ�.		���׿����ڴ� ������ ���̸� ù��°���� �����̸� �ι�°���� ����
	cout << cvalue << endl;				// cvalue�� ����(65)�� �ʱ�ȭ �Ͽ����� ���ڷ� ��µȴ�. *** charŸ���� ���ڵ� ���ڷ� �����Ѵ�.
	cout << fvalue << endl;				// ����Ʈ�� 6�ڸ��������� �ݿø��Ͽ� ��µȴ�.
	cout << dvalue << endl;				// ����Ʈ�� 6�ڸ��������� �ݿø��Ͽ� ��µȴ�.

	// ���� �ʱ�ȭ ��� //
	int a = 123;
	int b(123);
	int c{ 123 };

	return 0;
}