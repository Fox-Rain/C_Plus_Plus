#include<iostream>

using namespace std;

struct Person
{
	int age;
	double weight;
};

int main()
{
	Person person;
	person.age = 23;
	person.weight = 72.0;

	// 구조체에서 참조를 이용한 멤버접근
	Person &ref_person = person;
	ref_person.age = 23;
	ref_person.weight = 72.0;

	// 구조체에서 포인터를 이용한 멤버접근
	Person *ptr_person = &person;
	ptr_person->age = 23;			// -> 을 통해서 구조체의 속성에 접근
	(*ptr_person).weight = 72.0;    // 대부분 ->을 이용하지  구조체 접근에 래퍼런스는 잘 사용하지않는다.

	return 0;
}