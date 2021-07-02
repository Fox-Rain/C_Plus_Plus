#include<iostream>
#include<assert.h>

using namespace std;

template<typename T>
class MyArray
{
private:
	int m_length;
	T *m_data;

public:
	MyArray() // ������
	{
		m_length = 0;
		m_data = nullptr;
	}

	MyArray(int length) // length�� �޾Ƽ� �׸�ŭ �����Ҵ����ִ� ������
	{
		m_data = new T[length];
		m_length = length;
	}

	~MyArray() // �Ҹ���
	{
		reset();
	}

	void reset() // �Ҹ��ڿ��� ȣ��Ǵ� �Լ��� �Ҵ�� �޸𸮸� os�� �ǵ����� ������ ���
	{
		delete[] m_data;
		m_data = nullptr;
		m_length = 0;
	}

	T &operator[](int index) // [] operator �����ε�
	{
		assert(index >= 0 && index < m_length);
		return m_data[index];
	}

	int getLength() // length�� �����ϴ� �Լ�
	{
		return m_length;
	}

	/*
	void print() // �迭�� ���ҵ��� ����ϴ� �Լ�
	{
		for (int i = 0; i < m_length; ++i)
			cout << m_data[i] << " ";
		cout << endl;
	}
	*/
	void print(); // Ŭ�������� �Լ��� ������ �� ���
};

// Ŭ�������� �Լ��� ���Ǹ� �Լ� ������ ���� ��� //
template<typename T>
void MyArray<T>::print() // *** Ŭ�������� �ִ� �Լ��� ���Ǹ� ������ ����� MyArray<T> �̷������� template�� <>�� ���� �ۼ��� �־�� �Ѵ�.
{
	for (int i = 0; i < m_length; ++i)
		cout << m_data[i] << " ";
	cout << endl;
}

// ***** template�� ���Ǿ��ִ� Ŭ�������� �Լ��� ���Ǹ� �ƿ� �ٸ� CPP���Ϸ� ���� ��� ***** //
/*
	��, ���� ������ main.cpp , main.cpp�� include�ϴ� �������, ������Ͼȿ� �ִ� Ŭ������ �Լ��� ���� �κ��� ���� �����ϴ� cpp ������ �ִ� ������� �غ���.
	main.cpp�� ��������� include�Ͽ��� ������ ������Ͽ� �ִ� �Լ��� ȣ���� �� �ִ�. �׷��� ��������� �Լ��� ȣ��������, �Լ��� ������ ������Ͽ� ������ ���Ǵ� ���� cpp���Ͽ� �ֱ⿡  ���ǰ� �Ǿ��ִ� cpp������ �� ���� ��������
	�Ǿ���Ѵ�.  ��, �׷��� linking Error�� �߻��ϴµ�  �̶� �ذ��ϱ����ؼ��� �Ʒ��� ���� ������ ���ǰ� ����ִ� cpp���Ͽ��� �� �־�� �Ѵ�.
*/
// Explicit instantiation // 
// template void MyArray<���ϴ� Ÿ��>::print();      <- ��, �����Ϸ����� MyArray Ŭ�����ȿ� print()�Լ��� ���ؼ� <>���� �ڷ������� �������� �϶�� �˷��ִ� ���̴�.
// ���� ������ �Լ��� ���� ������ ��� �ƿ� Ŭ���� ��ü�� Explicit instantiation ���� ���� �ִ�.   ->  template class MyArray<char>;  template class MyArray<int>; .......

int main()
{
	MyArray<int> my_arr(10); // length = 10 ���� �ϴ� ��ü ����         *** class���� template�� ����ߴٸ�  Ŭ������< > �̷������� �� �ڷ����� ������ �־�� �Ѵ�.

	for (int i = 0; i < my_arr.getLength(); ++i)
		my_arr[i] = i * 10; // ��ü�� 0 10 20 30 40 50 60 70 80 90 ����

	my_arr.print();

	return 0;
}