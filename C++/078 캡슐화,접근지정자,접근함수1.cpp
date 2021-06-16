#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Date
{ // acecss specifier	
public:    // public:   퍼블릭으로 해주면 아래의 변수나 메소드들을 int main()에서도 접근하여 이용할 수 있다.
	int m_year; // private: 프리베이트로 해주면  아래 int main에서 접근하여서 이용할 수 없다. (private일 경우 정해진 방법으로만 접근이 가능해진다.)
	int m_month;
	int m_date;
};

int main()
{
	// 이런식으로 int main에서 public으로 되어있는 것들에게 접근이 가능하다.
	Date today = { 2021,6,16 };
	today.m_year = 2021;
	today.m_month = 5;
	today.m_date = 2;

	return 0;
}