#include<iostream>
#include<cmath>
#include<limits>

using namespace std;

int main()
{
	short s = 1;		// 2 bytes
	int i = 1;			// 4 bytes
	long l = 1;			// 4 bytes
	long long ll = 1;	// 8 bytes

	// sizeof(�ڷ���)	<-- �̰��� ���ؼ� ����Ʈ�� ������

	// #include <limits> //	numeric_linints <�ڷ���>:: max()/min()/lowset()
	cout << std::numeric_limits<short>::max() << endl;		// short�� ��Ÿ�� �� �ִ� ���� ū �� 32767
	cout << std::numeric_limits<short>::min() << endl;		// short�� ��Ÿ�� �� �ִ� ���� ���� �� -32767
	cout << std::numeric_limits<short>::lowest() << endl;	// lowset�� �ڿ����� �� �� �ִ�. -32767

	s = 32767;
	s += 1;				// ������ 32768
	cout << s << endl;	// �׷��� overflow�� �Ͼ -32768�� ��µǰ� �ȴ�.		��Ÿ�� �� �ִ� �ڷ����� �ѵ��� �ʰ��� ���� �Ǿ��� �����̴�.
						// ���� overflow�� ���ϵ��� �ڷ����� �� ����Ͽ��� �Ѵ�.
	return 0;	
}