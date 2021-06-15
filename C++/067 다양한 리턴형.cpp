#include<iostream>
#include<array>

using namespace std;

int &get(std::array<int, 100> &my_arr, int ix) // 리턴형을 참조로 할 수도 있다.
{
	return my_arr[ix]; // my_arr[ix]을 참조로 리턴함.
}

int main()
{
	std::array<int, 100>my_arr;
	my_arr[30] = 10;

	get(my_arr, 30) = 1024; // get에서 my_arr[30]을 "참조" 리턴하므로 1024를 넣게되면 my_arr[30]이 아예 1024로 바뀌게 된다.

	cout << my_arr[30] << endl; // 1024 출력

	return 0;
}