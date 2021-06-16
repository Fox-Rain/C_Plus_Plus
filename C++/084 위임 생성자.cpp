#include<iostream>
#include<string>

using namespace std;

class Student
{
private:
	int m_id;
	string m_name;

public:
	Student(const string &name_in)   // *** 위임 생성자
		:Student(0, name_in)  // 위임생성자는 이런식으로 다른생성자를 가져와서 쓰는것을 말한다. (아래의 생성자(파라미터 2개인)을 가져다 씀)
	{}

	Student(const int &id_in, const string &name_in)
		:m_id(id_in), m_name(name_in)
	{}

	void print()
	{
		cout << m_id << " " << m_name << endl;
	}
};

int main()
{
	Student harang(1004, "harang"); // 인수가 2개므로, 인수가 2개인 생성자를 호출하여 사용함

	harang.print(); // 1004 harang

	Student dog("dog"); // 인수가 1개이므로 위임생성자를 호출하고 다시 위임생성자는 인수가 2개인 생성자를 호출하는데 Student(0,name_in)이므로
						// m_id는 0으로 초기화된다.
	dog.print(); // 0 dog

	return 0;
}