#include<iostream>

using namespace std;

int getPrice(bool onsale)
{
	if (onsale) return 10;
	else return 100;
}

int main()
{
	// Comma operator ( 구분의 역할을 하는 쉼표가 아닌 "연산자"로서의 콤마 )
	// 콤마연산자는 우선순위가 높은 편이다.
	int x = 3;
	int y = 10;
	int z = (++x, ++y);		// 콤마 연산자의 경우 맨 오른쪽 값을 선택한다. 즉, 여기선 z에 11이 대입된다.

	cout << x << " " << y << " " << z << endl;	// 4 11 11이 출력됨.		여기서 알 수있는것은 int z = (++x,++y); 여기서 선택되는것은 ++y로 하나가 선택되지만.
												// "++x , ++y 둘다 실행은 된다."

	const int price = getPrice(true);			// 이런식으로 const는 if문에 따라서 값이 고정 될 수도 있다. (런타임에서 결정이 될 수 o )

	return 0;
}