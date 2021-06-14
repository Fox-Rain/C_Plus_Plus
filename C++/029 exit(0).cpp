// exit(0); 은 무조건 프로그램을 종료시킨다.
#include<iostream>

using namespace std;

int main()
{
	std::cout << "Hello world" << endl;

	exit(0);	// exit(0) 프로그램이 종료됨

	std::cout << "exit ?" << endl;	// 위에서 exit(0); 이코드는 실행되지 않는다.

	// 실행해보면 exit ? 은 출력이 되지 않는것을 볼 수 있다.	즉, exit(0)에서 코드가 끝나버린다.

	return 0;
}