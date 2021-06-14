#include<iostream>
#include<iomanip>		// std::setprecision()을 위해 include
#include<limits>		// numeric_limits 을 위해 include

using namespace std;

int main()
{
	float f;
	double d;
	long double ld;

	cout << sizeof(f) << endl;		// 4 bytes
	cout << sizeof(d) << endl;		// 4 bytes
	cout << sizeof(ld) << endl;		// 8 bytes

	// numeric_limits <자료형>::max/min/lowest() 로 호출 //
	// max
	cout << numeric_limits<int>::max() << endl;
	cout << numeric_limits<float>::max() << endl;
	cout << numeric_limits<double>::max() << endl;
	cout << numeric_limits<long double>::max() << endl;

	// min		최소값을 출력함 (단, 실수형의 경우 양수중 가장 작은값)
	cout << numeric_limits<int>::min() << endl;
	cout << numeric_limits<float>::min() << endl;
	cout << numeric_limits<double>::min() << endl;
	cout << numeric_limits<long double>::min() << endl;

	// lowest	최소값을 출력함
	cout << numeric_limits<int>::lowest() << endl;
	cout << numeric_limits<float>::lowest() << endl;
	cout << numeric_limits<double>::lowest() << endl;
	cout << numeric_limits<long double>::lowest() << endl;

	
	// #include <iomanip>     std::setprecision()을 이용하여 출력하면 출력되는 숫자의 자릿수를 설정할 수 있다.
	cout << 1.0 / 3.0 << endl;		// 0.333333		default는 소숫점 6자리까지만 출력된다.

	cout << std::setprecision(10);	// 출력 자리 숫자를 10자리까지로 
	cout << 1.0 / 3.0 << endl;		// 0.3333333333		소숫점 10자리까지 출력된다.

	return 0;
}