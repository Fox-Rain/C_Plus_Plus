#include<iostream>
#include<string>
#include<vector>

using namespace std;

// Friend : name, address, age, height, weight, print() ........
class Friend // class Friend를 만듦   <<< Friend 자체가 사용자가 정의한 자료형처럼 쓰이게 된다.
{
public: // accss specifier (public, private, protected)

	string name;
	string address;
	int age;
	double height;
	double weight;

	void print() // 이렇게 클래스안에 멤버로 함수를 넣을 수도 있음
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
	Friend harang{ "김하랑","경기도 고양시",23,170,55 };

	harang.print();


	std::vector<Friend>my_friend; // Friend클래스 배열을 만듦

	my_friend.resize(2); // Friend클래스 배열의 크기(갯수)를 2로 만듦

	for (auto &e : my_friend)
		e.print();

	return 0;
}