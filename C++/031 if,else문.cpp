#include<iostream>

using namespace std;

int	min(int num1, int num2)	// min값을 리턴하는 함수
{
	if (num1 > num2)		// if ()			()이 true면 실행
		return num2;
	else if (num1 < num2)	// else if ()		()이 true면서 위에 if()이 false면 실행
		return num1;
	else					// else				위에 두개가 다 false면 실행
		return 0;
}

int main()
{
	int a;
	cin >> a;

	int b;
	cin >> b;

	cout << min(a, b) << endl;

	return 0;
}