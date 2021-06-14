#include<iostream>

using namespace std;

struct Rectangle		// 구조체 Rectangle
{
	int length;
	int width;
};

int main()
{
	Rectangle rectangle_arr[10];				// 구조체배열 생성[10]

	cout << sizeof(Rectangle) << endl;		// Rectangle 구조체의 크기는 8bytes 가 출력
	cout << sizeof(rectangle_arr) << endl;	// 구조체 배열이므로 8x10 = 80bytes

	// 구조체 배열 초기화
	rectangle_arr[0].length = 12;
	rectangle_arr[0].width = 123;
	rectangle_arr[1].length = 142;
	// .............
	return 0;
}