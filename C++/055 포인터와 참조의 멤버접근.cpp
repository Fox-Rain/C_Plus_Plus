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

	// ����ü���� ������ �̿��� �������
	Person &ref_person = person;
	ref_person.age = 23;
	ref_person.weight = 72.0;

	// ����ü���� �����͸� �̿��� �������
	Person *ptr_person = &person;
	ptr_person->age = 23;			// -> �� ���ؼ� ����ü�� �Ӽ��� ����
	(*ptr_person).weight = 72.0;    // ��κ� ->�� �̿�����  ����ü ���ٿ� ���۷����� �� ��������ʴ´�.

	return 0;
}