#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Date
{ // acecss specifier	
public:    // public:   �ۺ����� ���ָ� �Ʒ��� ������ �޼ҵ���� int main()������ �����Ͽ� �̿��� �� �ִ�.
	int m_year; // private: ��������Ʈ�� ���ָ�  �Ʒ� int main���� �����Ͽ��� �̿��� �� ����. (private�� ��� ������ ������θ� ������ ����������.)
	int m_month;
	int m_date;
};

int main()
{
	// �̷������� int main���� public���� �Ǿ��ִ� �͵鿡�� ������ �����ϴ�.
	Date today = { 2021,6,16 };
	today.m_year = 2021;
	today.m_month = 5;
	today.m_date = 2;

	return 0;
}