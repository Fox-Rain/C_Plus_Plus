#include<iostream>

using namespace std;

template <typename T, int size>
class Array_BASE // ���̽��� �Ǵ� Ŭ����
{
private:
	T m_array[size];

public:
	T *getArray()
	{
		return m_array;
	}

	T &operator[](int index)
	{
		return m_array[index];
	}

	void print()
	{
		for (int i = 0; i < size; ++i)
			cout << m_array[i] << endl;
	}
};

// �Ʒ�ó�� ����� ���ؼ� Ŭ������ ����Լ��� ���ø��� �κ������� Ư��ȭ �� �� �ִ�.
// Ư��ȭ�� ����Լ� ����� �ٸ� Ŭ�������� �͵��� �ٽ� ������ �ʿ䰡 ����. (����� �����Ƿ�)
template<typename T, int size>
class Array :public Array_BASE<T, size>
{
};

template<int size>
class Array :public Array_BASE<char, size>
{
public:
	void print()
	{
		for (int i = 0; i < size; ++i)
			cout << m_array[i] << " ";
		cout << endl;
	}
};

int main()
{
	return 0;
}