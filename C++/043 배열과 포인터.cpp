#include<iostream>

using namespace std;

#define NUM_STUDENT 10			// #define을 통해 고정하면, 배열의 크기에 값을 대입할 수 있다.

void doSomething(int student_score[])		// *** 배열을 파라미터롤 받을때에는 포인터로 받는다.
{
	cout << student_score << endl;			// 00CFF7A8		배열의 첫주소가 출력됨		즉, 포인터변수 이기에 변수안에 들어가있는 값인 student_score 이 출력되는 것임.
	cout << &student_score << endl;			// 00CFF6D4		*** 포인터변수의 주소가 출력됨

	for (int i = 0; i < 10; ++i)
		cout << student_score[i] << "  ";

	cout << endl;

	cout << sizeof(student_score) << endl;	// 4	(포인터 변수의 크기)		파라미터 student_score는 포인터 변수이다.
}

int main()
{
	int student_score[NUM_STUDENT] = { 1,2,3,4,5,6,7,8,9,10 };

	cout << &student_score << endl;			// 배열의 주소	00CFF7A8

	cout << sizeof(student_score) << endl;  // 4x10    40

	doSomething(student_score);				// doSomething() ()안에 파라미터로는 배열을 가져가는 것이 아니라 , 배열의 주솟값을 포인터 변수에 넣어서 가져감.
											// 따라서 함수안에서 값을 변화시킨다면, 그 배열에 영향을 미치게 된다.
	return 0;
}