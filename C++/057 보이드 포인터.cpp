#include<iostream>

using namespace std;

int main()
{
	int a = 5;
	float f = 3.0f;
	char c = 'a';

	void *ptr = nullptr;   // 보이드 포인터를 널포인터로 초기화
	// *** 보이드 포인터에는 모든 자료형값의 주소가 들어갈 수 있음 //
	ptr = &a;
	ptr = &f;
	ptr = &c;

	// 보이드 포인터의 단점 //
	// 포인터연산과 디레퍼런싱이 되지 않는다.
	// 포인터연산은 자료형에 따라서 주소에 더하는 값이 바뀌는데  자료형을 알 수가 없으므로 연산이 불가능한 것임.
	// 디레퍼런싱이 되지 않기 때문에 값을 알아낼 수 없음
	// static_cast<>()을 통해서 강제 형변환을 해주면 디레퍼런싱으로 값을 알아낼 순 있음
	return 0;
}