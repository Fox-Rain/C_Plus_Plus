#include<iostream>
#include<string>

using namespace std;

struct person		// ����ü person
{
	string name;
	int age;
	float weight;
	double height;

	void print_Person_Information()
	{
		cout << "name: " << name << "  age: " << age << "  weight: " << weight << "  height: " << height << endl;
	}
};

struct Employee		// ����ü������ padding
{					// *** Employee�� ũ��� 2+4+8= 14�� ��������, padding�� �Ͼ �װͺ��� ū 16bytes�� �ȴ�.
	short id;		// 2 bytes
	int age;		// 4 bytes
	double wage;	// 8 bytes
};

int main()
{
	person A{ "����ī��",23,78.3,186.3 };
	person B{ "�����",3,15.3,54.3 };

	// ����ü�� ����� �θ����� '.' �� �̿��Ѵ�.
	A.print_Person_Information();
	B.print_Person_Information();

	cout << A.weight << endl;


	// padding
	Employee em1;
	cout << sizeof(em1) << endl;	// �������� �ڷ�����ũ�⸸ ������ Employee����ü�� 14bytes�����ϴµ�,	"�е��� �Ͼ 16�� ��µȴ�."
	return 0;
}