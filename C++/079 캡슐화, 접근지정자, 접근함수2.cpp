#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Date
{ // access specifier�� �������ҽ� default����  private:�̴� �� �Ʒ��� m_year, m_month, m_date�� int main()���� ������ �Ұ����ϴ�.
	int m_year;
	int m_month;
	int m_date;

public: // public:���� �����Ͽ����Ƿ� �Ʒ��� �޼ҵ���� int main()������ ������ ����������.
	void setDate(const int &year_input, const int &month_input, const int &date_input)
	{ // ���Լ��� class Date�ȿ� ���� �������Ƿ�, ���Լ��δ� private�� ������ �����ϴ�.
		m_year = year_input;
		m_month = month_input;
		m_date = date_input;
	}

	void getDate()
	{
		cout << m_year << "." << m_month << "." << m_date << endl;
	}

	void copyFrom(const Date &original)
	{ // �̷������� Ŭ������ ������ͼ� �����Ҽ� �ִ�. (�����ϱ�)
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