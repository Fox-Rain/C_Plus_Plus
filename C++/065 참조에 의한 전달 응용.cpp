#include<iostream>
#include<cmath>

using namespace std;

// C++은 함수에서 리턴값이 하나밖에 나올 수 없는데 매개변수로 참조를 사용하여 여러가지 리턴값이 나올 수 있도록 프로그래밍 할 수 있다.
void getSinCos(const double &degree, double &sin_out, double &cos_out) // sin_out, cos_out이 나오게 되는 값이다.
{
	static const double pi = 3.141592;
	const double radians = degree * pi / 180.0;

	sin_out = std::sin(radians);
	cos_out = std::cos(radians);
}

void foo(const int &x)		// 이렇게 래퍼런스를 const로 고정하면 값이 변화하진 못함. 그러나 변수든, 리터럴이든 받을 수 있음.
{
	cout << x << endl;
}

int main()
{
	double sin = 0.0;
	double cos = 0.0;

	getSinCos(30.0, sin, cos);

	cout << sin << "    " << cos << endl;

	return 0;
}