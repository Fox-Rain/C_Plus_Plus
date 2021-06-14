#include<iostream>	// cout, cin, endl.. 등을 쓰기위하여 include
#include<cstdio>	// printf, scanf 등을 쓰기위하여 include

using namespace std;

int main()
{
	cout << "hello world" << endl;		// endl;은 줄바꿈을 한다.  '\n'으로도 줄바꿈이 가능한데,	endl과 \n은 약간의 차이점이 있다.
	cout << "hello world";				// 이런식으로 endl;을 적지않으면 줄바꿈이 일어나지 않는다.

	int x = 1024;
	double pi = 3.141592;

	cout << "x is " << x << " pi is " << pi << endl;	// 문자열 출력시엔 "" 변수 출력시는 그냥

	cout << "abc" << "\t" << "def" << endl;				// "\t"을 이용하면 tab만큼 띄는것 뿐아니라 줄을 맞추어 주는 기능을 한다.
	cout << "ab" << "\t" << "cdef" << endl;				// abc	def
														// ab	cdef	 <<< 이런식으로 바뀐다.

	cout << "\a";		// 벨소리를 출력한다.			

	return 0;
}