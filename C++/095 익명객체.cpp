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
	A().print(); // �̷������� Ŭ������ü�� ���� �������� �ʰ� Ŭ�������� �޼ҵ带 �����ų �� �ִ�. (��, ������ �Ұ���) 

	return 0;
}