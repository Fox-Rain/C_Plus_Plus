#include<iostream>

using namespace std;

int main()
{
	int x = 6;
	int y = 6;

	// 전위 연산자는 먼저 증감을 실행하고 출력			후위 연산자는 먼저 출력하고 증감 실행
	cout << x << " " << y << endl;		// 6 6
	cout << ++x << " " << --y << endl;	// 7 5		(전위 연산자이기에 증감이 된 7 5)
	cout << x++ << " " << y-- << endl;	// 7 5		(후위 연산자이기에 출력후 증감 따라서 출력은 그대로 7 5)
	cout << x << " " << y << endl;		// 8 4		(이후 증감이 된것이 적용 되어서 8 4 출력)

	return 0;
}