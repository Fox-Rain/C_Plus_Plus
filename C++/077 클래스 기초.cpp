#include<iostream>
#include<string>
#include<vector>

using namespace std;

// Friend : name, address, age, height, weight, print() ........
class Friend // class Friend�� ����   <<< Friend ��ü�� ����ڰ� ������ �ڷ���ó�� ���̰� �ȴ�.
{
public: // accss specifier (public, private, protected)

	string name;
	string address;
	int age;
	double height;
	double weight;

	void print() // �̷��� Ŭ�����ȿ� ����� �Լ��� ���� ���� ����
	{
		cout << name << " " << address << " " << age << " " << height << " " << weight << endl;
	}
};

void print(const Friend &fr)
{
	cout << fr.name << " " << fr.address << " " << fr.age << " " << fr.height << " " << fr.weight << endl;
}

int main()
{
	Friend harang{ "���϶�","��⵵ ����",23,170,55 };

	harang.print();


	std::vector<Friend>my_friend; // FriendŬ���� �迭�� ����

	my_friend.resize(2); // FriendŬ���� �迭�� ũ��(����)�� 2�� ����

	for (auto &e : my_friend)
		e.print();

	return 0;
}