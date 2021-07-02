#include<iostream>
#include<string>
#include<map>

using namespace std;
// *** map�� ��쵵 �ߺ��� Ű�� ���� �����Եȴٸ�  Ű�� �ø��� ���� �ƴ�, �����ִ� Ű�� ���� �����մϴ�.

/*
	 < map�� insert ���� >
	 template <class T1, class T2>
	 struct std::pair
	 {
		T1 first;      <-- ���⿡ key��
		T2 second;     <-- ���⿡ value��
	 };
*/

template <typename K, typename V> //  map<A,B>�������� �� �� �ֵ�   map�� Ű,�� �̷��� �����Ƿ� A, B ������ template ���ڷ� ���� �� �ִ�. 
void print_map(std::map<K, V> &m) // *** ���� ��� ���ø� ���ڷ� 2���� ���µ� 1��°�� ŰŸ��, 2��°�� ���� Ÿ���� �޽��ϴ�.
{
	for (auto itr = m.begin(); itr != m.end(); ++itr) // map�� ���������� ���� index�� �ƴ� iterator�� ���ؼ� Ž���� �� �ֽ��ϴ�.   map�� insert�� "��ü"�� ���ؼ� �ֱ� ������
		cout << itr->first << " " << itr->second << endl; // �������� insert�� ���� ������ ����     '->' �����ڸ� ���ؼ� ���� ������ �� �ִ�.
														  // itr�� ��ü�� ����Ű��  ��ü->�� ���ؼ� ����� ������ �� �մ� ���̴�.
	/*
	for (auto& ele:m)                                    <-- �̷������� for���� iterator��� �Ϲ����� for���� �̿��� ���
	{
		cout<< ele.first <<" "<< ele.second << endl;     <-- .first    .second ó��    .�� ���ؼ� ������ �� �ִ�.
	}
	*/
}

template <typename K, typename V>
void search_print(std::map<K, V> &m, K key) // find -> ���� []���� �������� �Լ� 
{
	auto itr = m.find(key); // .find()�� ()���� ���� �����Ѵٸ� �װ��� iterator�� �����Ѵ�.  ����, ���� �������� �ʴ´ٸ� .end() iterator�� �����Ѵ�. 

	if (itr != m.end()) // map�� �ִٸ�
		cout << key << "--->" << itr->second << endl;
	else // map�� �������� �ʴ´ٸ�
		cout << key << "��(��) ��Ͽ� �������� �ʽ��ϴ�." << endl;
}

int main()
{
	map<string, double> pitcher_list;

	// map�� Ű/���� �ִ� ��� //  ***** ��ü�� ���ؼ� �ִ´� *****
	// (1) map���� insert�� ���Ͽ� ���� ���� ������ pair<>() "��ü"�� ���� ���� �� �ֽ��ϴ�.
	pitcher_list.insert(pair<string, double>("����Ʈ", 2.23));
	pitcher_list.insert(pair<string, double>("�輱��", 1.53));
	pitcher_list.insert(pair<string, double>("������", 3.23));

	// (2) map���� insert�Ҷ� pair<>()���� ������ make_pair()�� ���ؼ��� ���� �� �ֽ��ϴ�.     make_pair�� �׳� ������ �Ϳ� ���� �˾Ƽ� �ڷ����� �ٲپ� �ݴϴ�.
	pitcher_list.insert(make_pair("�̿���", 2.73));

	// (3) map���� insert���� []�� ���ؼ� ���Ҹ� �߰��� ���� �ֽ��ϴ�.
	pitcher_list["������"] = 0.97;

	print_map(pitcher_list); // �輱�� 1.53    ����Ʈ 2.23    ������ 3.23    ������ 0.97    �̿��� 2.73

	cout << pitcher_list["����Ʈ"] << endl; // �̷������� Ű���� ���� ���� ������ �� �ֽ��ϴ�.

	cout << pitcher_list["������"] << endl; // 0�� ���     �̷������� Ű���� ���°��� ����غ��� 0�� ��µȴ�.  ��, map�� Ű���� �������� ���� ��� default�� 0���� �����ع�����.
	// *** ���� find�� ���� Ű���� ������������ �ľ�����, []�� ���ؼ� ���� ã�ƿ��� ������ �ϴ°��� ����. ***

	search_print(pitcher_list, string("������")); // *** Ű���� ������ string()���� �����־���� 

	// ****** ������ ���� map�� ���� insert�� �ߺ��Ǵ� Ű���� ���� ��� insert�� �������� �ʽ��ϴ�.   ���� Ű�� ���� �ٲٰ� ���� ��� insert ��� []�� ���ϸ� ������ �� �ִ�. ****** //

	return 0;
}