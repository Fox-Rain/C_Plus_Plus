// ���� ��� �Լ��� ���������� �����ϴ� �Լ��̸� Ŭ������ü�� �ƹ��͵� ������� �ʾƵ� Something:: �� ������ �����ϴ�.
// ��, ���� ��� �Լ��ȿ��� this-> �� ��ü ����� �� ����.
#include<iostream>

using namespace std;

class Something
{
private: // private �ܺ����� �Ұ�
	static int s_value; // ����������� ����
	int m_value;

public:
	static int getValue() // ������� �Լ�  <-- ���⼭�� ���� ������ ������������� ����� �� �ִ�.
	{
		return s_value; // static member function������  this-> �� ����� �� ����.
		// return m_value; <<<< �Ұ���.  �� , ��������Լ��� ������������� ����� �����ϴ�.
	}
};

int Something::s_value = 1; // ����������� �ʱ�ȭ

int main()
{
	//cout << Something::s_value << endl;    <<< private�� static int s_value;�� �����Ͽ��⿡ ������� �������� �ܺο��� ������ �Ұ���.
	cout << Something::getValue() << endl; // public:�� getValue()�Լ��� ���� private s_value�� ���������� �����Ͽ� ȣ�� �� �� �ִ�

	return 0;
}