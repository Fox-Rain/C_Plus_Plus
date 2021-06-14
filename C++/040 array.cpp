#include<iostream>

using namespace std;

int main()
{
	int one_score;			// 1 variable
	int students_score[5];	// 5 variable (array)

	cout << sizeof(one_score) << endl;		// int형			4 bytes
	cout << sizeof(students_score) << endl;	// int형 5개	   20 bytes

	students_score[0] = 95;
	students_score[1] = 90;
	students_score[2] = 85;
	students_score[3] = 10;
	students_score[4] = 70;

	for (int i = 0; i < sizeof(students_score) / sizeof(int); ++i)			// 배열의 주소를 보면 (int)4byte씩 떨어져있는것을 알 수 있다. 왜냐하면 배열은 붙어있기때문이다.
	{																		// 95    006FFD3C
		cout << students_score[i] << "    " << &students_score[i] << endl;	// 90    006FFD40
	}																		// 85    006FFD44
																			// 10    006FFD48
																			// 70    006FFD4C

	// 배열자체의 값과 배열의 주소값은 일치한다. (또한 배열의 주소값은 배열[0]의 주소값과 같다.)
	cout << students_score << "    " << &students_score << endl;			// 006FFD3C    006FFD3C

	// 두번째 배열 초기화 방법
	int my_arr[5] = { 1,13,2,5,10 };	// my_arr[0]에 1, [1]에 13, [2]에 2, [3]에 5..... 이런식으로 순차적으로 배열에 초기화된다.
	// { } 부근에 제대로 초기화할 값을들 채웠다면 컴파일러가 알아서 읽어주므로 []안에 숫자는 생략도 됨.  Ex) int my_arr[]={1,13,2,5,10};

	return 0;
}