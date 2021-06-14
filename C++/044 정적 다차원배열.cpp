// 정적 다차원 배열
#include<iostream>

using namespace std;

int main()
{
	const int num_rows = 3;
	const int num_colums = 5;

	int arr[num_rows][num_colums] =
	{
		{1,2,3,4,5},		// row 0
		{6,7,8,9,10},		// row 1
		{11,12,13,14,15}	// row 2
	};

	for (int i = 0; i < num_rows; ++i)
	{
		for (int j = 0; j < num_colums; ++j)		// 출력하보면 알 수 있듯 다차원이라고 하지만 일차원이다. 일차원을 접어서 다차원으로 보이는것.
		{											// row가 바뀌어도 4바이트 차이씩으로 쭉 이어져 있다.
			cout << arr[i][j] << " ";
			cout << (int)&arr[i][j] << "     ";
		}
		cout << endl;
	}

	// 3차원 array
	//int my_array[3][4][5];			................... 4차 5차 ...........

	return 0;
}