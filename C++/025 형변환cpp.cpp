#include<iostream>
#include<typeinfo>		// typeid().name()�� �̿��ϱ����ؼ� include


using namespace std;

int main()
{
	// typeid(�� or ������).name()		<--- ���Ǵ� �������� �ڷ����� ������
	cout << typeid(4.0).name() << endl;	// �� �Է�

	auto a = 23;
	cout << typeid(a).name() << endl;	// ������ �Է�

	// dobule -> float, double -> int �� ū�ڷ������� ���� �ڷ������� ����ȯ�� ������ �� �� �����Ƿ� �����ϱ�.

	return 0;
}