#include<iostream>
#include<fstream>
#include<string>

using namespace std;

// 1) 성공실패를 return값으로 나누기   -1이 출력되면 함수가 정상작동하지 않은 것
int findFirstChar(const char *string, char ch)
{
	for (std::size_t index = 0; index < strlen(string); ++index)
	{
		if (string[index] == ch)
			return index;
	}

	return -1; // no match    return -1
}

// 2) bool타입 flag를 선언하여서 정상작동 유무를 파악
//    또다른 예로는 리턴값을 bool하여서 정상작동 유무를 파악하기도 함
double divide(int x, int y, bool &success)
{
	if (y == 0)
	{
		success = false;
		return 0.0;
	}

	success = true;
	return static_cast<double>(x) / y;
}

int main()
{
	// 프로그램의 실행이 제대로 작동했는지 확인하는 방법 //
	// 2)
	bool success; // bool flag;

	double result = divide(5, 3, success);

	if (success) // success == true
		cout << result;
	else // success == false
		cout << "Error!";


	// 예외처리 
	// 예외처리는 위의 1) , 2)의 것들을 완벽히 커버하는 것이 아니다.   왜냐하면 예외처리는 퍼포먼스 부분에서 크게 떨어 질 수 있기 때문이다.
	// *** 예측할 수 없는 일이 일어날 경우 문제가 생겨도 프로그램을 실행시켜야 하는 경우 (ex) 서버) 예외처리를 자주 사용한다.

	// try, catch, throw //
	double x;
	cin >> x;

	try // 문제가 생길 여지가 있는 부분을 try에 넣습니다.
	{
		if (x < 0.0) // sqrt 0일 경우 불가능하므로,
			throw std::string("Negative input"); // throw는 Error를 잡아서 던져줍니다.

		cout << std::sqrt(x) << '\n'; // 정상적인 경우
	}

	catch (std::string error_message) // catch에서는 throw에서 던져준 Error message를 받아서 
	{
		// do Something to respond   에러를 해결하기위한 행위를 합니다.
		cout << error_message << '\n';
	}

	// *** throw와 catch에서는 자료형을 꼭 정확히 선언해주어야한다.  (둘이 조금이라도 다른 자료형의 경우 throw의 error message가 catch로 제대로 넘어가지 않는다. 즉, Auto casting이 안된다.

	return 0;
}