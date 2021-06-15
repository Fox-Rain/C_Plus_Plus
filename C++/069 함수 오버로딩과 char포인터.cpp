// 오버로딩이란?       파라미터의 유형과 개수를 다르게 하여서 같은 이름의 함수를 선언/정의 하는 것을 말한다.
#include<iostream>
#include<string>

using namespace std;

// add로 이름이 같은 함수를 오버로딩
int add(int x, int y) // add 함수 int형
{
	return x + y;
}

double add(double x, double y) // add함수 double형
{
	return x + y;
}



void print(const char *value) {}   // ****   char*은 다른포인터와 다르게 문자열을 입력받는다. (문자열을 입력하면 주소로 받음) 따라서 " "을 인자로 넣어도 입력을 받을 수 있다.
								   //        또한 문자열을 char포인터로 받을땐 const로 꼭 고정해줘야한다.
void print(int value) {}

int main()
{
	// 컴파일러가 알아서 함수를 결정하여서 컴파일 해준다.
	add(1, 2);     // 인수가 int형이므로 int형 add 호출
	add(3.0, 2.0); // 인수가 double형이므로 double형 add 호출


	print(0);
	print("a");

	return 0;
}