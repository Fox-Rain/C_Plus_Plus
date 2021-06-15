#include<iostream>
#include<cmath>

using namespace std;

void addOne(int &x)   // 참조로 그자체가 넘어가므로, 함수가 끝나도 변화는 int main()에서도 유지된다.
{
	x += 1;
}

int main()
{
	int num = 1;

	cout << num << " " << &num << endl; // 1 00A4FE08

	addOne(num);

	cout << num << " " << &num << endl; // 2 00A4FE08

	return 0;
}