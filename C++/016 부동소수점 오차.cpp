// 부동소수점 따른 오차
#include<iostream>

using namespace std;

int main()
{
	double d1(100 - 99.99);
	double d2(10 - 9.99);

	cout << d1 << endl;		// 0.01 출력
	cout << d2 << endl;		// 0.01 출력

	if (d1 == d2)
		cout << "Equal" << endl;
	else
	{
		if (d1 > d2) cout << "d1 > d2" << endl;		// 분명 d1, d2는 처음에 0.01을 출력했는데, 이 if/else문에선 "d1 > d2"가 출력된다.
		else cout << "d1 < d2" << endl;
	}

	cout << std::abs(d1 - d2) << endl;		// 5.32907e -15		매우 작은 수치의 차이가 있음

	// 어느정도 작은수치의 차이는 인정하고 같다고 판별하는 코드
	const double epsilon = 1e-10;			// 인정할수 있는 오차를 const로 고정

	if (std::abs(d1 - d2) <= epsilon) cout << "Equal" << endl;	// 오차가 epsilon보다 작을 경우 Equal
	else cout << "Not Equal" << endl;							// 오차가 epsilon보다 클 경우 not Equal


	return 0;
}