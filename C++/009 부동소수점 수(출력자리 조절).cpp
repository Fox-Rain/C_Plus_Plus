#include<iostream>
#include<iomanip>		// std::setprecision()�� ���� include
#include<limits>		// numeric_limits �� ���� include

using namespace std;

int main()
{
	float f;
	double d;
	long double ld;

	cout << sizeof(f) << endl;		// 4 bytes
	cout << sizeof(d) << endl;		// 4 bytes
	cout << sizeof(ld) << endl;		// 8 bytes

	// numeric_limits <�ڷ���>::max/min/lowest() �� ȣ�� //
	// max
	cout << numeric_limits<int>::max() << endl;
	cout << numeric_limits<float>::max() << endl;
	cout << numeric_limits<double>::max() << endl;
	cout << numeric_limits<long double>::max() << endl;

	// min		�ּҰ��� ����� (��, �Ǽ����� ��� ����� ���� ������)
	cout << numeric_limits<int>::min() << endl;
	cout << numeric_limits<float>::min() << endl;
	cout << numeric_limits<double>::min() << endl;
	cout << numeric_limits<long double>::min() << endl;

	// lowest	�ּҰ��� �����
	cout << numeric_limits<int>::lowest() << endl;
	cout << numeric_limits<float>::lowest() << endl;
	cout << numeric_limits<double>::lowest() << endl;
	cout << numeric_limits<long double>::lowest() << endl;

	
	// #include <iomanip>     std::setprecision()�� �̿��Ͽ� ����ϸ� ��µǴ� ������ �ڸ����� ������ �� �ִ�.
	cout << 1.0 / 3.0 << endl;		// 0.333333		default�� �Ҽ��� 6�ڸ������� ��µȴ�.

	cout << std::setprecision(10);	// ��� �ڸ� ���ڸ� 10�ڸ������� 
	cout << 1.0 / 3.0 << endl;		// 0.3333333333		�Ҽ��� 10�ڸ����� ��µȴ�.

	return 0;
}