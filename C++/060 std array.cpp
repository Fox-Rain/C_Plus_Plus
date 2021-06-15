#include<iostream>
#include<array>

using namespace std;

void printLength(array<int, 5>my_array)    // 파라미터로 변수로 넣는 것보단, 참조로 넣을때 속도가 빠르다.   여기서의 array<>는 변수로 넣는 것이기 때문에 좀 느릴 수 있다.
{
	cout << my_array.size() << endl;
}

int main()
{
	std::array<int, 5>my_array = { 1,2,3,4,5 }; // std:;array<자료형,배열크기>배열명 = {}; 로 초기화

	cout << my_array.size() << endl;  // .size()는 배열의 크기(요소개수)를 리턴

	return 0;
}