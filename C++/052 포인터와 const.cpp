// const�� ������
#include<iostream>

using namespace std;

int main()
{
	// const int *ptr
	int value = 5;
	int value_ = 4;

	const int *ptr = &value;       // ** �����Ϳ��� const�� �ʱ�ȭ�ϴ°��� �������� �� ��, �����Ϳ� ���� �ּҰ��� �������� �ʰڴٴ� �ǹ̰� �ƴ϶�,
								   // ** �����Ϳ� ���� �ּҿ� ����Ǵ� ���� ��ȭ��Ű�� �ʰڴٴ� �ǹ��̴�.
	// ptr = &value_;          <<< �̷������� �����;ȿ� ���� ���� �ּҴ� �ٲܼ� ����.
	// *ptr = 3;               <<< �̷������� �ּҰ� ����Ű�� ���� ���� �� ����



	// int *const ptr
	int *const ptrr = &value;     // ** ���� �ݴ�� �������� �ּҰ��� ��ȭ��ų�� ������ ���� ��ȭ��ų �� �ִ�.



	const int value1 = 5;					// const �� ���� ������
	const int *ptr1 = &value1;				// �����͸� �����Ϸ��� �����͵� const�� �����ؾ���.
	// *ptr=4;								<<  de-referencing �ؼ� �ٲٴ°� �Ұ���.  const �� �����Ǿ��� ������.
	cout << *ptr1 << endl;					// de-referencing �ؼ� ����ϴ°��� ����. 




	int value2 = 4;							// ���� ���� x
	const int *ptr2 = &value2;				// �����͸� const�� ���� �� �� ����.
	value2 = 3;								// value2�� ������ �ƴϹǷ� ���� �ٲܼ� ������ *ptr2=3;�� �Ұ���.
	cout << value2 << " " << *ptr2 << endl;	// ����غ��� value2�� *ptr2(������)�� ���� 3���� ���� ���� �� �� �ִ�.





	// const int *const ptr=&value;			// �ּҰ�, �ּҾȿ� �� �Ѵ� �ٲ��� ����. �� ����� ��.
	int value = 5;
	const int *const ptrrr = &value;

	//*ptrrr = 10;						 <<  ���� �ּҸ� �ٲ����� ���ϰ� ���ּҾȿ� ���� ������ ���� �ٲ��� ����.		
	///ptrrr = &value2;	


	return 0;
}