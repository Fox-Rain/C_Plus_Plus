// multiset (��Ƽ��) //
// ��Ƽ���� �°� �ٸ��� ������ �ߺ��� ����մϴ�.
#include<iostream>
#include<string>
#include<set>

using namespace std;

template<typename K>
void print_set(multiset<K> &s)
{
	for (auto &ele : s)
		cout << ele << endl;
}

int main()
{
	multiset<string> s;

	s.insert("a");
	s.insert("c");
	s.insert("a");
	s.insert("b");
	s.insert("c");

	print_set(s); // a a b c c    �̷��� �ߺ��� �͵� �� insert�ȴ�.

	return 0;
}