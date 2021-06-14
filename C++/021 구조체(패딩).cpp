#include<iostream>
#include<string>

using namespace std;

struct person		// 구조체 person
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

struct Employee		// 구조체에서의 padding
{					// *** Employee의 크기는 2+4+8= 14로 보이지만, padding이 일어나 그것보다 큰 16bytes가 된다.
	short id;		// 2 bytes
	int age;		// 4 bytes
	double wage;	// 8 bytes
};

int main()
{
	person A{ "말랑카우",23,78.3,186.3 };
	person B{ "길냥이",3,15.3,54.3 };

	// 구조체의 멤버를 부를때는 '.' 을 이용한다.
	A.print_Person_Information();
	B.print_Person_Information();

	cout << A.weight << endl;


	// padding
	Employee em1;
	cout << sizeof(em1) << endl;	// 위에서의 자료형의크기만 따지면 Employee구조체는 14bytes여야하는데,	"패딩이 일어나 16가 출력된다."
	return 0;
}