// ���ڴ� �����δ� ���ڷ� ������ �ȴ�.
#include<iostream>

using namespace std;

int main()
{
	char c1(65);
	char c2('A');		// C++ ������ ���� �ϳ��� ''   ���ڿ��� ""

	cout << c1 << " " << c2 << endl;
	cout << char(65) << endl;			// charŸ���� ���ڵ� ���ڷ� �ٲپ� ����Ѵ�.
	cout << int('A') << endl;

	// static_cast ����ȯ  <�տ����� ����ȯ���� �ణ�� ���̰� �ִ�>
	// static_cast <�ٲ� ��ǥ �ڷ���> (��) 
	cout << static_cast<char>(65) << endl;
	cout << static_cast<int>('A') << endl;

	return 0;
}