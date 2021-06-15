#include<iostream>
#include<array>

using namespace std;

bool isEven(const int &number)
{
	if ((number % 2) == 0)	return true;
	else return false;						// if문을 만족 못 시킬 경우 false를 리턴함
}

bool isOdd(const int &number)
{
	if ((number % 2) != 0) return true;
	else return false;						// if문을 만족 못 시킬 경우 false를 리턴함.
}

void printNumbers(const array<int, 10> &my_arr, bool(*check_func)(const int &))	// 이런식으로 함수 포인터로 받을 수 있다.
{
	for (auto element : my_arr)
	{
		if (check_func(element) == true) cout << element;
	}
	cout << endl;
}

int main()
{
	std::array<int, 10>my_arr = { 1,2,3,4,5,6,7,8,9,10 };

	printNumbers(my_arr, isEven);
	printNumbers(my_arr, isOdd);

	return 0;
}