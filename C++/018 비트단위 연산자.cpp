#include<iostream>
#include<bitset>	// std::bitset< > () 을 이용하기 위해서 include

using namespace std;

int main()
{
	unsigned int a = 1;

	// std::bitset <표현하고 싶은 비트수>(표현할 값) 이러한 형식으로 쓰인다.
	cout << std::bitset<4>(a) << " " << a << endl;		// 0001		1  출력

	// 비트단위 연산자 shift '<<' '>>'
	// shift의 의미는 2진수로 볼때 자리 옮김이지만, 10진수로 볼때엔 곱하기2 나누기2와 같은 역할을 한다.
	// Ex) 0001 에서 0010은  1에서 2가 되므로 곱하기 2이다. 
	// *** shift operator을 이용하면 연산량을 줄일 수 있어 빠른 연산이 가능하다는 장점이 있다.

	unsigned int b = a << 1;		// '<<' 비트를 << 이쪽으로 옮긴다. 즉, 0001에서 0010
	cout << std::bitset<4>(b) << " " << b << endl;	// 0010		2  출력

	unsigned int c = b >> 1;		// '>>' 비트를 >> 이쪽으로 옮긴다. 즉, 0010에서 0001
	cout << std::bitset<4>(c) << " " << c << endl;	// 0001		1  출력

	unsigned int d = c << 2;		// '<<' 비트를 << 이쪽으로 2번 옮긴다. 즉, 0001에서 0100
	cout << std::bitset<4>(d) << " " << d << endl;	// 0100		4  출력


	// 비트단위 연산자 Not '~'  ~을 붙이게 되면 비트 1은 0, 0은 1로 바뀐다.
	unsigned int A = 7;
	cout << std::bitset<4>(A) << endl;		//	0111
	cout << std::bitset<4>(~A) << endl;		//	1000


	// 비트단위 연산자 AND OR XOR
	unsigned int B = 0b1100;		// 이진수 1100
	unsigned int C = 0b0110;		// 이진수 0110

	cout << std::bitset<4>(B & C) << endl;	// &(AND) B C를 한자리씩 비교하여 1이 둘다 있을 경우만 1 나머지는 0			즉, 0100 출력
	cout << std::bitset<4>(B | C) << endl;	// |(OR)  B C를 한자리씩 비교하여 1이 하나라도 있으면 1 아예없으면 0		즉, 1110 출력
	cout << std::bitset<4>(B ^ C) << endl;	// ^(XOR) B C를 한자리씩 비교하여 0 1이 하나씩 있으면 1   00,11일 경우 0    즉, 1010 출력

	return 0;
}