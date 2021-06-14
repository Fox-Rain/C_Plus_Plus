#include<iostream>

using namespace std;

int main()
{
	char c1(65);

	// abc를 입력해보자, abc를 입력하고 enter을 하게되면 뒤에 cin(입력)창은 뜨지않고 한번에 a b c를 출력하는데 그것은 버퍼가 지워지지 않아서이다.
	// 즉, abc를 입력한다고 하자, c1은 char타입이기 때문에 하나의 문자만 입력받을 수 있다. 따라서 처음에는 a만 입력이 되고 bc는 입력버퍼에 남게된다.
	// 이후, cin(입력)이 호출될 때마다 입력버퍼에 남아있는 b, c 가 차례대로 입력되게 된다.
	cin >> c1;
	cout << c1 << endl;

	cin >> c1;
	cout << c1 << endl;

	cin >> c1;
	cout << c1 << endl;

	// endl은 줄바꿈 기능뿐아니라 버퍼를 모두 출력하는 기능을 한다.
	return 0;
}