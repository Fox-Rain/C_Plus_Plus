// ���� �����̳� //
// set�� �����������̳�(vector, list, deque)�� �ٸ�  "���������̳�" �̴�.     ���������̳ʴ� �����������̳ʿ� �ٸ��� key-value (Ű-��) ������ ���´�.  ��, ��� Ű�� ������ �׿� �����ϴ� ���� �����ش�.
// ��, ���������̳ʴ� Ű�� �������� Ű�� �����Ǵ� ���� ���� �� �ִ� �����̴�.    C++������  1. Ű�� �����Ǵ� ���� �ִ��� true/false   2. Ű�� �����Ǵ� ���� ��������    << �̷��� ����� ����� �� �ִµ�,
// ���� ã�°��� ���¸� ó���ϴ� ������ ��(set)�� ��Ƽ��(multiset)�� �ְ�,    ���� �����Ѵٸ� Ű�� �����ϴ� ���� ���ϴ� ��(map)�� ��Ƽ��(multimap)�� �ִ�.
// *** ũ���� ������ ó���ϸ� �Ǵ� ��� ���� ����ϴ°��� ����.  (���� �ʺ��� �޸� ũ�Ⱑ �۱� �����̴�.)
// ���� set�� Ư¡���δ� ���ҵ��� �ߺ��� �����ʴ´ٴ� ���Դϴ�.

// set //   *** set�� ��� key�� �����մϴ�. *** 
#include<iostream>
#include<set>

using namespace std;

template <typename T> // �Լ� ���ø� T
// set�� �����������̳�ó�� ������ ��ġ ���ҿ� ������ �Ұ����ϱ� ������ iterator�� ���� �������� ���ٸ��� �����մϴ�.
void print_set(set<T> &s)
{
	typename std::set<int>::iterator itr;
	cout << "[";
	for (itr = s.begin(); itr != s.end(); ++itr)
		cout << *itr << " ";
	cout << "]";
}

template <typename T> // �Լ� ���ø� T
void print_set_class(set<T> &s) // > operator�� ���ǵ� class ��
{
	cout << "[" << endl;
	for (const auto &ele : s)
		cout << ele << " " << endl;
	cout << "]" << endl;
}

template <typename T, typename C>
void print_set_class_2(set<T, C> &s) // *** set�� ��� set<A,B> �̷������� �ڿ� compare ���õ� �Լ� ���� ���ڷ� �޽��ϴ�.     �տ�ó�� set�� �ι�° ���ڷ� �Ѱ��ָ� set�� �̸� �޾Ƽ� BŬ������ ���ǵ� �Լ��� �������� �񱳸�
{                                    //                                                                                    �����Ͽ� �����ϰ� �˴ϴ�.
	for (auto &ele : s)
		cout << ele << " " << endl;
}

class Todo // Ŭ���� ����
{
private:
	int priority;
	string job_desc;

public:
	Todo(int priority, string job_desc)
		:priority(priority), job_desc(job_desc)
	{}

	bool operator < (const Todo &t)const
	{
		if (priority == t.priority) // �߿䵵�� ���ٸ�
			return job_desc < t.job_desc; // job�� ������ ������ ���� ����

		return priority < t.priority; // �߿䵵�� �ٸ� ���
	}

	friend ostream &operator << (ostream &out, const Todo &td)
	{
		out << "�߿伺: " << td.priority << "    " << td.job_desc;
		return out;
	}
};

class Todos // �Ǵٸ� set�� ����� Ŭ���� �����
{
private:
	int priority;
	string job_desc;

public:
	Todos(int priority, string job_desc)
		:priority(priority), job_desc(job_desc)
	{}

	friend struct TodoCmp; // < operator�� ���´�ſ�  TodoCmp�� �����Ͽ� ����� �� �ִ�.

	friend ostream &operator << (ostream &out, const Todos &td)
	{
		out << "[ �߿䵵: " << td.priority << "]" << td.job_desc;
		return out;
	}
};

struct TodoCmp // ***  < operator ��� ����� struct ��ü       TodoCmp�� set�� ���ڷ� �־��� ������ �����Ҷ� �񱳿����� TodoCmp class�� ���� �����մϴ�.
{
	bool operator()(const Todos &t1, const Todos &t2) const// () �� �����Ͽ��� ũ�⸦ ���Ѵ�.
	{
		if (t1.priority == t2.priority)
			return t1.job_desc < t2.job_desc;
		else
			return t1.priority < t2.priority;
	}
};
// **** ��, set���� class�� ����Ϸ���  < operator�� ����ϴ��� ������ �ϴ� ũ�⸦ ���� �� �ִ� operator�� �����ؾ� set�� class�� �̿��� �� �ִ�.

int main()
{
	std::set<int> set;

	// set�� ���Ҹ� �߰��ϱ� ���ؼ��� insert�� ����ϸ� �ȴ�.   �׷��� �����������̳ʵ�� �ٸ������� �����������̳ʴ� �����ϳ��� ��� �׻��ڿ� ��ȣ�� �ű� ���̶��, set�� �׳� ū ���ڿ� ��� ���Ҹ� ���ų��� ���̶�� �����ϸ� �˴ϴ�.
	// ��, ��� �߰����� ������ ���� ���� ���ڿ� ���Ұ� �ֳ�/���ĸ� �����Ѵٴ� ���Դϴ�.   �����������̳ʴ� ����� �۾��� O(N)�ΰͿ� ���� set�� �߰�/����� �۾���  O(logN)���� �ð����⵵�� �۽��ϴ�.
	// set�� ������ �����̳ʺ��� ���� ����� �߰��ϴ� �۾��� �ð����⵵�� �۴ٴ� ������ �ֽ��ϴ�.
	set.insert(10);
	set.insert(30);
	set.insert(20);
	set.insert(50);
	set.insert(40);

	print_set(set); // 10 20 30 40 50       ����غ��� ���ĵǾ ������ ���� �� �� �ִ�.   ��, "set�� ���ο� ���Ұ� �߰��� �� ������ �ǵ��� �߰��ȴٴ� ���� �� �� �ֽ��ϴ�."
					// *** set�� ���������� Ʈ�������� �̷�����ֽ��ϴ�. ***  ���� ���Ҹ� ã�� ����/�߰� �ϴµ� Ʈ���� ���� N  O(logN)�� �˴ϴ�.

	auto itr = set.find(20); // set������ .find() ()�ȿ� �ش�Ǵ� ���Ұ� �����Ѵٸ� �̰��� ����Ű�� �ݺ��ڸ� �����ϰ�, ���� �������� �ʴ´ٸ� .end()�� �����մϴ�.
	cout << endl;

	if (itr != set.end()) // ã������
		cout << *itr << endl; // 20 ���
	else // itr == set.end() ã����������
		cout << "Not find" << endl;


	std::set<int> set2;

	set2.insert(1);
	set2.insert(3);
	set2.insert(3);
	set2.insert(3);
	set2.insert(5);

	print_set(set2); // 1 3 5 �� ��µ�.   *** ��, set������ �ߺ��� �����ϰ� �����ϴ°��� �� �� �ִ�.
	cout << endl;    // set�� inset�� �ߺ��Ǵ� ���� �����Ѵٸ� �ƿ� insert�� �������� �ʽ��ϴ�. 



	std::set<Todo> set3;

	// class�� insert�� ������ �ű⿡�� �ʿ��� ������ �����ε��� �� �����Ǿ��־�� �Ѵ�. ���⼱ set�� ���������� ������ �ϹǷ� class�ȿ��� < operator�� �����Ǿ� �־���Ѵ�.....  <-- �̷������� ���������� Ŭ�������� �����Ǿ� �־����
	set3.insert(Todo(1, "���ڱ�"));
	set3.insert(Todo(2, "�ڵ��ϱ�"));
	set3.insert(Todo(1, "��Ա�"));
	set3.insert(Todo(3, "��� ����"));

	print_set_class(set3); // �߿伺: 1 ��Ա�    �߿伺: 1  ���ڱ�     �߿伺: 2  �ڵ��ϱ�      �߿伺: 3  ��� ����


	std::set<Todo> set4;
	set4.insert(Todo(1, "���ڱ�"));
	set4.insert(Todo(1, "���ڱ�"));

	print_set_class(set4); // �߿伺: 1 ���ڱ�       �ߺ��ǹǷ� �Ѱ��� ��µǴ� ���� �� �� �ִ�.

	// *** set���� �ߺ����� Ȯ���ϴ� ����   operator < , > �� ����Ͽ��� �� �Ѵ� false ��, �ٸ� �ѿ��Һ��� ������, ũ���� ���� ��� ���ٰ� �Ǵ��մϴ�.
	//                                    �ٽ� ���ؼ� A,B �� �ٸ� ��ü��� A<B �Ǵ� A>B�� �ϳ��� true�� ������ �Ǿ�� �մϴ�.


	// Ŭ�����ȿ��� �Ǵٸ� ũ�⸦ ���ϴ� oerator�� ���� class ���� set
	std::set<Todos, TodoCmp> set5;
	set5.insert(Todos(1, "���ڱ�"));
	set5.insert(Todos(3, "�ǾƳ�"));
	set5.insert(Todos(2, "�ڵ�"));
	set5.insert(Todos(2, "��Ա�"));

	print_set_class_2(set5);

	return 0;
}