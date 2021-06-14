// 변수 초기화와 대입은 엄연히 다르다. //
#include<iostream>

using namespace std;

int main()
{
	int x;						// 변수 x를 선언
	x = 123;					// 변수 x에 123 "대입" assignment

	std::cout << x << endl;		// 123 출력

	int y = 123;				// 변수 y를 "초기화" initializagion
	y = 777;					// 변수 y에 777 "대입"

	return 0;
}