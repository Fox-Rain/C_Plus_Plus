#include<iostream>

using namespace std;

void doSomething(int x)
{
	cout << x << "    " << &x << endl;
}
int main()
{
	// 아래의 출력값들으 보면 알겠지만 모든 함수에서는 006FFAC8로 같고 x주소와는 다르다. 왜냐하면 함수에선 값 복사로 와서 다른 변수에 저장되기 때문이다. 이후 함수가 끝나면 os에 반환
	doSomething(5); // 5    006FFAC8

	int x = 6;
	cout << x << "    " << &x << endl; // 6    006FFB9C   <<< int main()에서 x값과 x주소

	doSomething(x); // 6    006FFAC8
	doSomething(x + 1); // 7    006FFAC8

	return 0;
}