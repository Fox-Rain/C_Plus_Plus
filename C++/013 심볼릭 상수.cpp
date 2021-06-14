// 프로그래밍의 과정은	컴파일타임(소스코드작성 + 기계어 번역) --> 런타임(콘솔등을 통해 프로그램이 돌아감) 순이다.
#include<iostream>
#include"My_header.h"		// 자신이 만든 헤더파일을 include하여서 여러가지를 가져와 사용할 수 있다.

using namespace std;

int main()
{
	// const  변수의 값을 고정하여 수정하지 못하게 한다.
	const double gravity{ 9.8 };	// gravity를 9.8로 고정.		소스코드에서 gravity =3; 이런식으로 다른값을 대입하려고 하면 컴파일타임에 에러가 생김



	// constexpr	vs const
	int num;
	cin >> num;

	const int const_num = num;			// const는 값이 런타임에 결정되어도 된다. (즉, 런타임에 입력받는것으로 고정 할 수 있음)

	constexpr int constexpr_num = 123;	// constexpr은 값이 컴파일타임에 결정되어야한다. (즉, 런타입에 입력받는것으로 고정 할 수 없음)

	return 0;
}