// 두번이상 반복될 시 함수를 만들어서 중복을 제거하는것이 좋다.
#include<iostream>

using namespace std;

int add_Two_Numbers(int num1, int num2)		// <함수의 기본 형태>		리턴하는 자료형 함수명 (parameter) { }   
{
	int sum = num1 + num2;
	
	return sum;
}

void print_Hello_World()					// 이함수의 경우 리턴값이 없다 (밖으로 주어질 값이 없음) 따라서 리턴하는 자료형을 void로 선언함
{
	cout << "Hello world" << endl;
}

int main()
{
	cout << add_Two_Numbers(1, 2) << endl;		// 1,2가 파라미터로 들어가고 더해져서 3이 리턴되고 그값이 출력되므로		3 출력

	print_Hello_World();						// Hello world 출력

	return 0;
}