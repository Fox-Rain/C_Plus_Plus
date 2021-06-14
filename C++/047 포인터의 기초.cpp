#include<iostream>

using namespace std;

struct Something		// padding 없이 4+4+4+4 = 16
{
	int a, b, c, d;
};

int main()
{
	int x = 5;
	int y = 3;

	// 포인터를 선언할때도 *을 쓰고,  de-reference해서 값을 가져올 때도 *을 쓴다.
	// 포인터 선언	--> 포인터안에들어갈 변수 자료형  *포인터명 = 변수의 주소;
	int *ptr_x = &x;
	int *ptr_y = &y;

	cout << ptr_x << " " << &x << " " << *ptr_x << endl;		// ptr_x 포인터변수 안의 값은 x의 주소			008FFBA8 008FFBA8 5
	cout << ptr_y << " " << &y << " " << *ptr_y << endl;		// ptr_y 포인터변수 안의 값은 y의 주소			008FFB9C 008FFB9C 3

	double d = 1.0;
	double *ptr_d = &d;		// 이런식으로 포인터도 안에들어가는 주소의 값의 자료형과 맞추어 주어야한다.

	cout << sizeof(&x) << " " << sizeof(&y) << " " << sizeof(&d) << endl;				// 주소의 크기는 모두 4 4 4 로 같다.
	cout << sizeof(ptr_x) << " " << sizeof(ptr_y) << " " << sizeof(ptr_d) << endl;		// 포인터는 주소를 의미하므로 역시 4 4 4 로 같다.
	cout << sizeof(*ptr_x) << " " << sizeof(*ptr_y) << " " << sizeof(*ptr_d) << endl;	// de-refernece하면 값이므로 자료형에 따라서 4 4 8 출력

	// 구조체의 포인터
	Something a;
	Something *ptr_a = &a;

	cout << sizeof(a) << endl;		// 16
	cout << sizeof(ptr_a) << endl;	// 4 포인터(주소)므로

	return 0;
}