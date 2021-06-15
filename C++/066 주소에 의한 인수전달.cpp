#include<iostream>

using namespace std;

void foo(int *ptr)  // 파라미터로 포인터(주소)만 받음
{
	cout << *ptr << " " << ptr << " " << &ptr << endl;
}

void foo(double degrees, double *sin_out, double *cos_out) // 파라미터에 포인터를 전달해서 역시 리턴을 여러개 할 수 있다.
{
	*sin_out = 1.0;
	*cos_out = 2.0;
}

int main()
{
	int value = 5;

	cout << value << " " << &value << endl;

	int *ptr_v = &value;

	foo(ptr_v);
	foo(&value);

	int value = 5;

	cout << value << " " << &value << endl;

	int *ptr = &value;

	cout << &ptr << endl;

	double degrees = 30;
	double sin, cos;

	foo(degrees, &sin, &cos);						// 함수가 포인터로 받으니까 주소로 보내줘야함. (참조로 보내주던지 포인터로 보내주던지)

	cout << sin << " " << cos << endl;
	return 0;
}