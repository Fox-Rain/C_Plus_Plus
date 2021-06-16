#include<iostream>
#include<string>

using namespace std;

class Student
{
private:
	int m_id;
	string m_name;

public:
	Student(const string &name_in)   // *** ���� ������
		:Student(0, name_in)  // ���ӻ����ڴ� �̷������� �ٸ������ڸ� �����ͼ� ���°��� ���Ѵ�. (�Ʒ��� ������(�Ķ���� 2����)�� ������ ��)
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
	Student harang(1004, "harang"); // �μ��� 2���Ƿ�, �μ��� 2���� �����ڸ� ȣ���Ͽ� �����

	harang.print(); // 1004 harang

	Student dog("dog"); // �μ��� 1���̹Ƿ� ���ӻ����ڸ� ȣ���ϰ� �ٽ� ���ӻ����ڴ� �μ��� 2���� �����ڸ� ȣ���ϴµ� Student(0,name_in)�̹Ƿ�
						// m_id�� 0���� �ʱ�ȭ�ȴ�.
	dog.print(); // 0 dog

	return 0;
}