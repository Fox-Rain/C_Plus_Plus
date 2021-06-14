// std::cin.fail()		입력에 성공했는지, 실패했는지에 따라서 0,1 반환함. (성공실패여부는 자료형이 맞는가, 오버플로우가 발생하지 않았는가 등..)
// std::cin.clear()		에러플래그를 초기화하는 기능 cin.fail()이 1이 된것을  초기화함.
// std::cin.ignore( , ) 입력값만큼 or 입력한문자를 만날시 그것들을 싹다 버퍼에서 무시함.		std::cin.ignore(읽을 버퍼 수, 만나면 멈출 문자) <<< 버퍼에 있는 것을 지움.
// cin.fail() < Error flag >을 통해서 if / else문에 응용시키는 것이 많다.
#include<iostream>

using namespace std;

int getInt()	// 정수 입력받는 함수
{
	while (1)
	{
		cout << "Enter a integar number" << endl;

		int num;
		cin >> num;		// 정수형이면 num에 들어가고 \n만 버퍼에 남을 것이고, 맞지않는 자료형일 경우 입력버퍼에 모두 남을 것이다.

		if (std::cin.fail())	// 제대로 입력이 안됬을 때			std::cin.fail()은 입력에 성공시 0, 입력에 실패시 1 반환		< Error flag >
		{
			std::cin.clear();	// std::cin.fail()==1이 된것을 초기화시킴 cin.fail()=0으로 바꿈
			std::cin.ignore(32767, '\n');	// \n (한줄띄기)를 만날때까지 32767번째 버퍼까지 읽는다.

			cout << "Invaild number, Please try again" << endl;
		}
		else		// 입력이 제대로 됬을 때
		{
			std::cin.ignore(32767, '\n');	// 정수형이 제대로 들어갔으므로, \n 만 버퍼에서 사라진다.

			return num;
		}
	}
}

char getOperator()
{
	cout << "Enter an operator" << endl;

	while (1)
	{
		char oper;
		cin >> oper;

		std::cin.ignore(32767, '\n');

		if (oper == '+' || oper == '-' || oper == '*' || oper == '/') return oper;

		else cout << "Invaild operator, Please try again" << endl;
	}
}

void print_Result(int num1, int num2, char oper)
{
	switch (oper)
	{
	case '+':
		cout << num1 + num2 << endl;
		break;
	case '-':
		cout << num1 - num2 << endl;
		break;
	case '*':
		cout << num1 * num2 << endl;
		break;
	case '/':
		cout << num1 / num2 << endl;
		break;
	}
}

int main()
{
	int num1 = getInt();
	char oper = getOperator();
	int num2 = getInt();

	print_Result(num1, oper, num2);

	return 0;
}