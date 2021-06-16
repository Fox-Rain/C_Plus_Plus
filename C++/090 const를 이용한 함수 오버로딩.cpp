// const를 이용한 함수 오버로딩
#include<iostream>
#include<string>

using namespace std;

class Something
{
public:
	string m_value = "default";

	// const를 뒤에 붙이냐 안붙이냐로도 오버로딩(같은이름의 함수를 사용하기) 이 가능하다. ( 매개변수까지 같아도 가능.)
	const string &getValue() const
	{
		cout << "const" << endl;
		return m_value;
	}

	string &getValue()
	{
		cout << "non-const" << endl;
		return m_value;
	}
};

int main()
{
	Something something;
	something.getValue(); // non-const   something은 초기화시 const를 씌우지 않았기 때문에 const가 없는 getValue()함수가 호출된다.

	const Something something2;
	something2.getValue(); // const  something2는 초기화시 const로 씌웠으므로 const가 있는 getValue()함수가 호출된다.

	return 0;
}