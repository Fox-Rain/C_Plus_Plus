#include<iostream>

using namespace std;

class A
{
public:
	void print()
	{
		cout << "hello" << endl;
	}
};

int main()
{
	A().print(); // 이런식으로 클래스객체를 따로 선언하지 않고도 클래스내에 메소드를 실행시킬 수 있다. (단, 재사용이 불가능) 

	return 0;
}