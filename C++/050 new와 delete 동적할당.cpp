#include<iostream>

using namespace std;

int main()
{
	// int var;
	// var = 7; 과 아래의 new int를 이용한 과정은 같다.

	int *ptr = new int;    // new int란?  os로부터 받아온 4bytes크기의 메모리 주소

	*ptr = 7;    // ptr을 de-reference하여서 7을 대입함
	// int *ptr = new int(7);     <<< 이런식으로 한번에 위의 과정을 할 수도 있음

	cout << ptr << endl;    // os에서 할당한 (new int) 주소가 출력됨
	cout << *ptr << endl;   // os에서 할당한 주소에 있는 값 7이 출력됨

	// os에게 메모리를 다시 돌려주기  (쓰지않는 메모리는 os에게 돌려주기)
	delete ptr;
	ptr = nullptr;




	// memory leak "메모리 누수" <매우 주의할점>
	while (1)					// 이렇게되면 os에게 메모리 주소는 할당받는데, 값은 넣지않는 메모리 누수가 무한루프로 일어난다.
	{							// 디버깅해보고 메모리 사용량을 보면 무한대로 메모리 사용량이 늘어나는 것을 볼 수 있다.
		int *ptr = new int;
		cout << ptr << endl;

		// delete ptr;  <<<<<<< ****(해결법) 이걸 해주면 바로바로 주소를 os에게 다시 돌려주므로 메모리 사용량이 정확히 일정하게 유지된다.
	}

	// int *ptr = new int; 로 할당받고 delete ptr;로 다시 돌려주고.. 반복하므로  메모리 사용량이 일정함.
	// *** new int와 delete은 os와 주고받으므로 시간이 많이 걸리는 과정이다. 따라서 빠른 성능이 필요한 프로그램일 경우 new int 와 delete를
	// *** 적게 실행 하는쪽으로 프로그래밍하는것이 중요하다. ( 최적화 )
	
	return 0;
}