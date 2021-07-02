// unordered_set (���ĵ����ʴ� ��) //
// ��, set�� �ٸ��� ������ �����ʰ� ���ο� ����˴ϴ�.
// ******** unordered_set�� ������ insert,erase,find�� ��� O(1)�� ���Դϴ�. ********* //
#include<iostream>
#include<string>
#include<unordered_set>

using namespace std;

template <typename K>
void print_unordered_set(unordered_set<K> &m)
{
	for (auto &ele : m)
		cout << ele << endl;
}

int main()
{
	unordered_set<string> s;

	s.insert("a");
	s.insert("c");
	s.insert("b");
	s.insert("d");

	print_unordered_set(s); // ����غ��� �˰����� ������ ������ �ƿ� �����ϴ�.

	return 0;
}