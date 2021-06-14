// cin>>	은 엔터나 스페이스바가 입력될때까지 입력을 받는다.

#include<iostream>
#include<string>

using namespace std;

int main()
{
	string my_num = "486";			// string 자료형의 경우 숫자를 대입할때에도 ""로 감싸서 문자열로 넣어야한다.

	string str;
	// cin >> str;		을 쓸 경우, 스페이스바를 입력받지 못하므로 이번에는 쓰지않았다. (스페이스입력하면 입력이 끝나므로)
	std::getline(std::cin, str);	// getline을 이용하면 스페이스까지 포함하여 입력을 받을 수 있다.

	cout << str << endl;

	// 문자열 사칙연산
	string a = "hi ";
	string b = "hello";

	cout << a + b << endl;			// 이런식으로 문자열 끼리 덧셈이 가능하다.

	// 문자열 길이	length()
	string A = "hello world";
	cout << A.length() << endl;		// .length() 문자열의 문자개수(띄어쓰기 포함)을 리턴함
	return 0;
}