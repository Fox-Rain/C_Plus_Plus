#include<iostream>

using namespace std;

int func()
{
	return 5;
}

int goo()
{
	return 10;
}

char type(int x)
{
	return 69;
}

int main()
{
	// 함수도 포인터이다.
	cout << func << endl;  // func를 출력하니 00007FF62557141F 주소값이 출력됨.  즉 , 함수도 포인터(주소값을가진변수) 라는 것을 알 수 있다.

	// 함수 포인터 초기화 //
	int (*func_ptr)();			// int(*func_ptr)()=func; 로 초기화 할 수도 있음.
	func_ptr = func;				// func_ptr은 함수포인터기 때문에 주소를 대입해야하므로 func를 대입함 func()이 아니라. (func()는 주소가 아니라 기능함수임)	
	cout << func_ptr() << endl;	//(5 출력) func_ptr은 func(주소)임 여기에 () 붙이면 func()  즉, func_ptr()=func() 므로  func()함수가 실행되게 된다.

	func_ptr = goo;				// 이번엔 함수 포인터에 goo라는 함수의 주소를 대입함.
	cout << func_ptr() << endl;	// (10 출력) func_ptr=goo,  func_ptr()=goo(); 이므로 goo()함수가 실행되기 때문임.


	// 함수포인터는 자료형 타입을 맞춰 주어야한다. //
	char(*type_ptr)(int) = type;	// 함수포인터 초기화 형식 >>>>    함수 리턴값 자료형(*함수포인터명)(인수자로형) = 함수주소(=함수에서 괄호A것);

	return 0;
}