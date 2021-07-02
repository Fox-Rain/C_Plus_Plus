// multimap (��Ƽ��) //
// ��Ƽ���� �ʰ� �ٸ��� ���� �ߺ��� �����մϴ�.
#include<iostream>
#include<string>
#include<map>

using namespace std;

template <typename K, typename V>
void print_map(multimap<K, V> &m)
{
	for (auto &ele : m)
		cout << ele.first << " " << ele.second << endl;
}

int main()
{
	multimap<int, string> m;

	m.insert(make_pair(1, "hello"));
	m.insert(make_pair(2, "hi"));
	m.insert(make_pair(1, "hi"));
	m.insert(make_pair(1, "hello"));

	print_map(m); // 1 hello  1 hi   1 hello   2 hi

	cout << m.find(1)->second << endl; // hello ���           m.find(1)�� ���ؼ� key���� 1�� iterator�� ã��  -> �� ���ؼ� second�� �����Ѵ�.    *** ��, (1)�� �������� ���� �ִٸ�, ��� ���� �������� �����Դϴ�.

	// **** ���� ��Ƽ���� []�����ڸ� �������� �ʽ��ϴ�.

	// eqaul_range()       ()���� Ű���� ������ �ݺ��ڵ��� ���۰� ���� pair�� ���� �����մϴ�.
	auto range = m.equal_range(1);
	for (auto itr = range.first; itr != range.second; ++itr) // �ݺ��ڵ��� ù first, �� second 
		cout << itr->first << " : " << itr->second << endl; // 1 : hello   1 : hi    1 : hello

	return 0;
}