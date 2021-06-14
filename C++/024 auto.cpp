#include<iostream>

using namespace std;

auto add(int a, int b)			// auto는 함수에서 리턴값의 자료형으론 가능하지만, 파라미터의 자료형으로는 불가능하다. (파라미터는 자료형을 정해야함)
{
	return a + b;
}
int main()
{
	auto a = 1;
	auto b = 1.3f;
	auto c = 'A';
	auto d = 1.32;

	auto result = add(1, 2);	// 함수의 리턴값을 받을때도 auto 쓸 수 있다.

	return 0;
}