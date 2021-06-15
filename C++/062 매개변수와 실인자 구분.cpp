// 매개변수와 인자의 차이
// 함수에서 파라미터가 들어가면 (변수로 들어갈때) 값을 복사해가서 다른곳에 저장하는데, 함수가 끝남과 동시에 복사해서 저장해둔 메모리는 os에 반납이 된다.
#include<iostream>

using namespace std;

int foo(int x, int y); // 함수선언

int foo(int x, int y)  // 함수정의
{
	return x + y;
}
// x and y are destroyed here. 함수에서 사용된 파라미터 들은 함수가 끝남과 동시에 OS로 메모리가 반남됨. 즉, 저장값이 사라짐.
// 마치 지역변수 같은 느낌.

int main()
{
	int x = 1;
	int y = 2;

	foo(6, 7);
	foo(x, y);

	return 0;
}