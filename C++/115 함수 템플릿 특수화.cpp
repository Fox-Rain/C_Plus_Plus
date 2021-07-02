#include<iostream>

using namespace std;

template<class T>
class Storage
{
private:
	T m_value;

public:
	Storage(T value)
	{
		m_value = value;
	}

	~Storage()
	{}

	void print() // *** �Ϲ����� ����Լ�
	{
		cout << m_value << endl;
	}
};

template<> // *** Ŭ�������� ����Լ��� ���ø� Ư��ȭ
void Storage<string>::print() // Storage<string> string�������� ��ü�� print()�� ȣ���� ��� �� Ư��ȭ�� �Լ��� ȣ����
{                             // �̰� ���� ���������� ���� ����� ���Ǹ� cpp���Ϸ� �ű�⿣ �����ϹǷ� ������ ��� ����� ���Ƽ� ����������� �ڵ��� �ϴ� ��ʰ� ����.
	cout << "String type" << endl;
	cout << m_value << endl;
}




template<typename T>
T getMax(T x, T y)
{
	// if (T == char)                              <--- if���� �Ұ����ϴ�.  �ֳ� template�� ������ Ÿ�ӿ� �����Ǿ�� �ϹǷ�, ��Ÿ�ӿ� ���Ǵ� if���� ����� �� ����.  ���� �Ʒ��� ���� �ڵ��ϴ°��� ����.
	//     cout << "Compare char type" << endl;
	return (x > y) ? x : y;
}

template<> // *** �Լ� ���ø� Ư��ȭ       �Ʒ��� �ڵ�� charŸ���� ��� template �Լ��� ����������� �� �Լ��� ����϶�� �����Ϸ����� ��û�ϴ� ���̴�.
char getMax(char x, char y)  // <-- �̷������� if�� ��� Ư�� template�� �°� ���� �ڵ��� ���ָ� �ȴ�.
{
	cout << "Warning: comparing char type" << endl;
	return (x > y) ? x : y;
}

int main()
{
	cout << getMax(1.0, 2.0) << endl;
	cout << getMax<double>(1, 2) << endl; // < >�� �̿��Ͽ��� �ڷ����� ���� �� ���� �ִ�.      ���� �ڵ�� �Ϻ��� ��ġ�̴�.

	cout << getMax('a', 'c') << endl;


	// Ŭ�������� ���ø��� ��� < >���� ������Ÿ�ӿ��� ������ �־�� �Ѵ�.
	Storage<int> nvalue(5);
	Storage<string> svalue("Son");

	nvalue.print(); // int�� Ư��ȭ�� �Լ� x   ���� �׳� �Ϲ� ����Լ� ȣ��
	svalue.print(); // svalue�� stringŸ������ Ư��ȭ�� �Լ��� �����Ƿ� �װ��� ȣ��

	return 0;
}