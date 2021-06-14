#include<iostream>

using namespace std;

int main()
{
	int num;
	cin >> num;

	switch (num)		// swtich문은 입력에 맞는 case를 찾아서 실행하고, 그 뒤에 case도 계속해서 실행함. Ex) num==1이어서 case 1로 가서 실행하면 2,3도 계속 실행함.
	{					// 따라서 맞는 case에가서 하나만 실행하길 바란다면 실행후 switch문을 나가도록 break;을 걸어주어야 한다.
	case 0:
		cout << "zero";
		// break;
	case 1:
		cout << "One";
		// break;
	case 2:
		cout << "Two";
		// break;
	case 3:
		cout << "Three";
		// break;
	}
	cout << endl;

	return 0;
}