// list //
// list�� ���� ���߿��Ḯ��Ʈ�� �����ȴ�.  ���߿��Ḯ��Ʈ�� �����Ǹ� �޸𸮻��� ������ ��ġ�� ���Ҹ� �����ϴ��� ������ �����ϴ�.  �ֳ��ϸ� ���������� ��ũ�� ���� ���� ���ҷ� ��ô�� ���� �� �ֱ� �����̴�.
// 
// list�� ���п� �̷��� ������ ���´�.    1. ������ ��ġ�� ������ ���԰� ������ �����ϴ�. (�ð����⵵ ����ð�)    2. ���δٸ� �����̳� ���̳� �����̳� ���� ���ҵ鰣�� '�̵�'�� �ſ� ȿ�����̴�. (�������� ���������� ã��ʱ⿡ ����ð�)
//                                      3. ���ҵ��� �տ�����, �ڿ��� ������ ������ ���� �� �ִ�.           4. �ٸ� ���� �����̳ʵ� ó�� �޸��Ҵ�� ������ ���������� ������ �����Ѵ�.
// �ٸ� ǥ�ؼ��� �����̳� (vector deque)��� ���غ����� ����Ʈ�� ���һ���, ����, �����̳� ���ΰ��� ������ �̵���� �ξ� ȿ�����̴�.  ���� ���� �˰���ó�� ������ �̵��� ������ �Ͼ�� ����ϸ� ȿ������ �����̳��̴�.
// 
// ������ ������ ���µ� �������δ�     1. ���ҵ��� �ε����� ���� �����ϴ°��� ��ȿ�����׶�� ���̴�. ���ҵ鸶�� ����,�Ǵ� �����͵��� ��ũ�� �������ֱ⿡ ó������ ��ũ�� Ÿ�� ���ϴ� index���� ���� ������ �� �� �ִٴ� �������� �ִ�.
//                                   2.���� �߰������� �ٸ������� �ּҰ��� �����ؾ� �ϹǷ�, (x86 ����) ���Ҹ��� �߰������� 8byte�� �޸𸮸� �� �����ϰ� �Ǵ� ��ȿ������ ���� �ִ�.

// list�� ���� ����ϴ� ��� 1.������ �����Ͱ����� �������϶�  2. ����ȿ�Ҹ� ���� �˻����� ������  3.�߰��� ������ ���� ������ ����Ҷ�  4. ���� �������� �������� ���� ��    �����ϴ�.

// list�� Node����� �����̳��Դϴ�.  list�� ����Լ��� vector,deque�ʹ� �ٸ��� ����(sort,merge), �̾���̱�(splice)�� �ֽ��ϴ�  ��������([],at())���� �Ұ����մϴ�.
#include<iostream>
#include<list>

using namespace std;

int main()
{
	// list ����, �ʱ�ȭ       list <�ڷ���> ����Ʈ��
	list<int> list1; // lt1�̶�� ����ִ� ����Ʈ�� ����
	list<string> list2(10); // default=0���� �ʱ�ȭ�Ǿ��ִ� 10���� ���Ҹ� ���� ����Ʈ�� ����    <<< ���⼭�� <string>�� list�Ƿ� ""���� �ʱ�ȭ �ȴ�.
	list<int>list3(3, 2); // 2�� �ʱ�ȭ�� ���� 3�� �������ִ� ����Ʈ�� ����
	list<int>list3_copy(list3); // ()�ȿ� �Ǵٸ� ����Ʈ�� �ְԵǸ� �׸���Ʈ�� �����Ͽ� �����Ѵ�.
	list<int>list4 = { 1,2,3,4 }; // �̷������� �ʱ�ȭ�� �ѹ��� �� ���� �ִ�.



	// list ����Լ� //
	list<int>list5;

	// .assign(m,n)    n���� �ʱ�ȭ�� ���� m���� �Ҵ��Ѵ�.    �ٸ��͵��� list�� ����־��ٸ� �����ϰ� �տ�ó�� ä���.
	list5.assign(3, 5);
	list<int>::iterator itr5;

	for (itr5 = list5.begin(); itr5 != list5.end(); ++itr5)
		cout << *itr5 << endl; // 5 5 5 ���

	// .front()    �Ǿ��� ���Ҹ� ��ȯ

	// .back()     �ǵ��� ���Ҹ� ��ȯ

	// .begin()    �Ǿ��� ���Ҹ� ����Ű�� iterator�� ��ȯ

	// .end()      �Ǹ����� ������ ���Ҹ� ����Ű�� iterator�� ��ȯ      list��  head -> 1����� -> 2����� -> ... -> ��������� -> head    ���� .end()��  head�� ����Ű�� iterator�� ��ȯ�Ѵ�.

	// .rbegin(),    .rend()     �ݴ� ������ �����Ҷ� �̿��ϴ� iterator

	// .push_back() .pop_back() .push_front() .pop_front ..

	// .insert( iterator ,	k)   iterator�� ����Ű�� ���� k�� ������.

	// .erase(iterator)    itertator�� ����Ű�� ���Ҹ� ������

	// .size()   ������ ������ ��ȯ��

	// .remove(k)    K�� ���� ���Ҹ� '���' �����մϴ�.
	list5.remove(5); // 5 5 5  ���� 5�� ��� �����ϹǷ�    ���Ұ� �ƿ� �� ������� �ȴ�.

	cout << list5.empty() << endl; // ���� .empty()�� �ϰԵǸ� true 1�� ��µȴ�.

	// .remove_if(predicate) predicate���� true�� �����ϴ� ���Ҹ� ��� �����մϴ�.    predicate�� ���ڸ� 1���� ������ �������� bool�� �Լ��Դϴ�.
	list<int>list6 = { 1,2,3,4,5 }; // 1 2 3 4 5 
	list6.remove_if([](int i) {return i % 2; }); // �̷������� ����� �� �ִ�.

	list<int>::iterator itr6;
	for (itr6 = list6.begin(); itr6 != list6.end(); ++itr6)
		cout << *itr6 << endl; // 2 4 ��� 

	// .reverse()   ���ҵ��� �������� �������ϴ�.
	list<int>list7 = { 1,2,3,4,5 };
	list7.reverse();

	list<int>::iterator itr7;
	for (itr7 = list7.begin(); itr7 != list7.end(); itr7++)
		cout << *itr7 << endl; // 5 4 3 2 1

	// .sort()     default�δ� ������������ �����ϰ�,   �Լ�(�ΰ��� ���ڸ� ������ bool�������� �Լ�)�� ���Ͽ� �ڽ��� ���ϴ� ���ǿ� ���߾� ������ ���� �ִ�.
	list<int>list8 = { 1,3,2,5,7 };
	list<int>::iterator itr8;

	list8.sort(); // default
	for (itr8 = list8.begin(); itr8 != list8.end(); itr8++)
		cout << *itr8 << endl; // 1 2 3 5 7

	list8.sort([](int i, int j) {return i > j; }); // �Լ��� ���ؼ� ���Ĺ���� �ٲ� �� �ִ�.
	for (itr8 = list8.begin(); itr8 != list8.end(); itr8++)
		cout << *itr8 << endl; // 7 5 3 2 1

	// .swap()     ()��ȣ���� list�� ���� �ٲߴϴ�.

	// .splice()
	// (1)
	list<int>list9 = { 1,2,3,4,5 };
	list<int>list9_splice = { 7,7,7 };
	list<int>::iterator itr9;

	list9.splice(list9.begin(), list9_splice); // .splice(�������� iterator, ���� list)
	for (itr9 = list9.begin(); itr9 != list9.end(); ++itr9)
		cout << *itr9; // 77712345
	cout << endl;

	// (2)
	list<int>list10 = { 1,2,3,4,5 };
	list<int>list10_splice = { 10,15,18 };
	list<int>::iterator itr10;

	list10.splice(list10.end(), list10_splice, ++list10_splice.begin()); // .splice(�������� iterator, ����list, ���� list�� ���� ������ iterator)   *** ���⼭ �����ϰ� ������ list������ list10.begin()+1�̷����� ������
	for (itr10 = list10.begin(); itr10 != list10.end(); ++itr10)         // �Ұ����ϴٴ� ���̴�.  ++,--�� ���� iterator�� ����� ���ۿ� ����.  (�����͵��� ���������� �پ��ִ°��� �ƴϱ� ����)
		cout << *itr10; // 1234515
	cout << endl;

	// (3)
	list<int>list11 = { 1,2,3,4,5,6 };
	list<int>list11_splice = { 43,23,77 };
	list<int>::iterator itr11;

	list11.splice(++list11.begin(), list11_splice, list11_splice.begin(), ++list11_splice.begin()); // .splice(�������� iterator, ���� list, ���� list�� ���� iterator, ���� list�� ������ iterator)
	for (itr11 = list11.begin(); itr11 != list11.end(); ++itr11)
		cout << *itr11; // 14323456
	cout << endl;

	// .unique()
	list<int>list12 = { 1,2,3,3,3,4,5 };
	cout << list12.size() << endl; // ó���� 7

	list12.unique(); // ������ ���Ұ� ������ �����ϰ� ����ϴ�. (�ϳ����� �����͵��� ����)

	cout << list12.size() << endl; // 5
	list<int>::iterator itr12;
	for (itr12 = list12.begin(); itr12 != list12.end(); ++itr12)
		cout << *itr12; // 1 2 3 4 5
	cout << endl;

	// .merge()
	// (1)
	list<int>list13 = { 1,3,7,11 }; // ���ĵǾ��ִ� list
	list<int>list13_merge = { 4,5,13,25 }; // ���ĵǾ��ִ� list
	list13.merge(list13_merge); // list13�� ()���� ����Ʈ�� �պ��Ͽ� �����Ѵ�.      *** ��, �� ����Ʈ�� ���� ������ �Ǿ��־�� �Ѵ�.

	list<int>::iterator itr13;
	for (itr13 = list13.begin(); itr13 != list13.end(); ++itr13)
		cout << *itr13;
	cout << endl;

	// (2)
	list<int>list14 = { 1,3,4,5 };
	list<int>list14_merge = { 2,3,4,6,9 };
	list14.merge(list14_merge, [](int i, int j) {return i > j; }); // ���� �Լ��� �־ �ڽ��� ���ϴ� ���ǿ� ���� �պ� ���ĵ� �����ϴ�.

	return 0;
}