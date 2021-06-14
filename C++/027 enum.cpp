#include<iostream>

using namespace std;
// enum 안에 상수들은 대문자로 적는다.
enum Color				// enum은 0부터 시작하여서 순차적으로 값이 +1씩 커진다.
{
	COLOR_BLACK,		// 0
	COLOR_RED,			// 1
	COLOR_BLUE = 23,	// 23 (23으로 대입했으므로 23)
	COLOR_GREEN			// 24 (23에서 +1한 24)
};

int main()
{
	Color house(COLOR_BLUE);
	Color apple(COLOR_RED);

	cout << COLOR_BLACK << endl;	// 0
	cout << COLOR_RED << endl;		// 1
	cout << COLOR_BLUE << endl;		// 23
	cout << COLOR_GREEN << endl;	// 24

	return 0;
}