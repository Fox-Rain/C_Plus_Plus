#include<iostream>
#include<bitset>	// std::bitset< > () �� �̿��ϱ� ���ؼ� include

using namespace std;

int main()
{
	unsigned int a = 1;

	// std::bitset <ǥ���ϰ� ���� ��Ʈ��>(ǥ���� ��) �̷��� �������� ���δ�.
	cout << std::bitset<4>(a) << " " << a << endl;		// 0001		1  ���

	// ��Ʈ���� ������ shift '<<' '>>'
	// shift�� �ǹ̴� 2������ ���� �ڸ� �ű�������, 10������ ������ ���ϱ�2 ������2�� ���� ������ �Ѵ�.
	// Ex) 0001 ���� 0010��  1���� 2�� �ǹǷ� ���ϱ� 2�̴�. 
	// *** shift operator�� �̿��ϸ� ���귮�� ���� �� �־� ���� ������ �����ϴٴ� ������ �ִ�.

	unsigned int b = a << 1;		// '<<' ��Ʈ�� << �������� �ű��. ��, 0001���� 0010
	cout << std::bitset<4>(b) << " " << b << endl;	// 0010		2  ���

	unsigned int c = b >> 1;		// '>>' ��Ʈ�� >> �������� �ű��. ��, 0010���� 0001
	cout << std::bitset<4>(c) << " " << c << endl;	// 0001		1  ���

	unsigned int d = c << 2;		// '<<' ��Ʈ�� << �������� 2�� �ű��. ��, 0001���� 0100
	cout << std::bitset<4>(d) << " " << d << endl;	// 0100		4  ���


	// ��Ʈ���� ������ Not '~'  ~�� ���̰� �Ǹ� ��Ʈ 1�� 0, 0�� 1�� �ٲ��.
	unsigned int A = 7;
	cout << std::bitset<4>(A) << endl;		//	0111
	cout << std::bitset<4>(~A) << endl;		//	1000


	// ��Ʈ���� ������ AND OR XOR
	unsigned int B = 0b1100;		// ������ 1100
	unsigned int C = 0b0110;		// ������ 0110

	cout << std::bitset<4>(B & C) << endl;	// &(AND) B C�� ���ڸ��� ���Ͽ� 1�� �Ѵ� ���� ��츸 1 �������� 0			��, 0100 ���
	cout << std::bitset<4>(B | C) << endl;	// |(OR)  B C�� ���ڸ��� ���Ͽ� 1�� �ϳ��� ������ 1 �ƿ������� 0		��, 1110 ���
	cout << std::bitset<4>(B ^ C) << endl;	// ^(XOR) B C�� ���ڸ��� ���Ͽ� 0 1�� �ϳ��� ������ 1   00,11�� ��� 0    ��, 1010 ���

	return 0;
}