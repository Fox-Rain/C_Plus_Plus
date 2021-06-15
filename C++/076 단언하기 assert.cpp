#include<iostream>
#include<cassert>		// assert.h   <<< *** 디버그 모드에서만 적용됨 (릴리즈모드에선 적용이 안됨)
#include<array>

using namespace std;

void printValue(const std::array<int, 5> &my_arr, const int &ix)
{	// assert가 런타임에 알려줌.
	assert(ix >= 0);					// assert를 사용하면 디버그 모드에서 디버깅하여 런타임에러등이 뜨게되면, assert로 정의 한것을
	assert(ix <= my_arr.size() - 1);	// 그이유로 디버깅창에 띄워주게된다. ( 다른 프로그래머들이 오류 찾기에 용이)
										// 주석같은느낌인데, 주석보다 더 강력 할수 있다.
	cout << my_arr[ix] << endl;
}

int main()
{
	std::array<int, 5> my_arr{ 1,2,3,4,5 };

	printValue(my_arr, 100);			// 런타임에러가 나는 경우 (100은 배열의 크기를 넘으므로 런타임에러가 발생함)



	const int x = 10;
	// static_assert 컴파일러가 알려줌 (타이핑할때)
	static_assert(x == 10, "x should be 5 ");	// x가 10으로 고정되지 않으면 빨간줄이 그어짐. (타이핑 오류를 줄이기 위하여 사용함) 
												// 또한 뒤에 " " 로 주석을 달아 줄 수 있다.

	return 0;
}