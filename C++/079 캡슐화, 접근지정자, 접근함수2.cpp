#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Date
{ // access specifier을 설정안할시 default값이  private:이다 즉 아래의 m_year, m_month, m_date에 int main()에서 접근이 불가능하다.
	int m_year;
	int m_month;
	int m_date;

public: // public:으로 선언하였으므로 아래의 메소드들은 int main()에서도 접근이 가능해진다.
	void setDate(const int &year_input, const int &month_input, const int &date_input)
	{ // 이함수는 class Date안에 정의 되있으므로, 이함수로는 private에 접근이 가능하다.
		m_year = year_input;
		m_month = month_input;
		m_date = date_input;
	}

	void getDate()
	{
		cout << m_year << "." << m_month << "." << m_date << endl;
	}

	void copyFrom(const Date &original)
	{ // 이런식으로 클래스를 가지고와서 대입할수 있다. (복사하기)
		m_year = original.m_year;
		m_month = original.m_month;
		m_date = original.m_date;
	}
};

int main()
{
	Date today;
	today.setDate(2021, 5, 2);
	today.getDate();

	Date copy;
	copy.copyFrom(today);
	copy.getDate();

	return 0;
}