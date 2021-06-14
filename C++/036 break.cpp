#include<iostream>

using namespace std;

void break_Or_Return()
{
	while (1)
	{
		char c;
		cin >> c;

		if (c == 'b')
			break;			// 자신이 속한 곳을 빠져나온다.	여기선 while(1){}을 빠져나옴
		else if (c == 'r')
			return;			// return 은 함수를 나와버린다. 아예
	}

	cout << "Break!" << endl;
}

int main()
{
	break_Or_Return();

	return 0;
}