#include<iostream>

using namespace std;

int main()
{
	int apple = 5;
	cout << apple << " " << &apple << endl;			// 5	00CFFE88	

	{
		apple = 1;									// ���⼭�� apple�� �ڷ����� ���� �ʾ����Ƿ�, �ٸ� �������� apple�� �ǹ��� ���� apple�� ��� ���� ����,�ּ�
		cout << apple << " " << &apple << endl;		// 1	00CFFE88
	}
	cout << apple << " " << &apple << endl;			// 1	00CFFE88


	int orange = 3;
	cout << orange << " " << &orange << endl;		// 3	00CFFE7C	 �ٸ� �������� orange

	{
		int orange = 5;								// ���⼭�� orange�� �ڷ����� �پ����Ƿ� �� ���������� �ʱ�ȭ�Ȱ���. ���� �ٸ� ��������orange�� �ּҰ� �ٸ�
		cout << orange << " " << &orange << endl;	// 5	00CFFE70	�������� orange
	}
	cout << orange << " " << &orange << endl;		// 3	00CFFE7C	ó�� �������� orange

	return 0;
}