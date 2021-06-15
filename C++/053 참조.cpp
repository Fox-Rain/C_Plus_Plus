#include<iostream>

using namespace std;

void doSomething(int &n)    // 변수를 참조로 보내게 되면 변수 그자체를 보내는 것이므로, 함수안에서 변경이 일어났을 경우 main()안에서도 그대로 변경된다.
{
	n = 1000;
	cout << n << endl;
}

int main()
{
	int value = 5;
	int &ref = value;     // 래퍼런스로 선언할때에는 변수명앞에 &을 붙여준다.  래퍼런스(참조)를하면 참조한것과 똑같이 사용할 수 있다.

	cout << value << "    " << ref << endl;    // 5    5

	ref = 10;

	cout << value << "    " << ref << endl;    // 10    10
	// 즉, 래퍼런스(참조)를 하게되면 일반 대입처럼 값을 가져와서 넣는것이 아니라 변수 그자체를 가져온다고 보면 된다.

	// int &ref 참조변수는 꼭 초기화가 있어야함   int &ref; <<<< 불가능
	// int &ref 참조변수는 꼭 초기화 할 시 변수가 들어가야함.  int &ref=1004; << 이런 상수가 들어가는것이 불가능.
	// 또한 const int x=8;  int &ref = x;  << 이것도 불가능. const된 변수도 넣는것 불가능.

	// 참조하게 되면 그변수와 값, 주소 등 모든것이 같아진다.

	int value_ = 3;

	doSomething(value_);       // 1000이 출력되면서 value_=1000이 됨

	cout << value_ << endl;    // 위함수에서 참조로 변수가 전달됬었으므로 value_=1000이 그대로 유지되므로 1000출력

	return 0;
}