#include<iostream>

using namespace std;

template<typename T, int size>
class  StaticArray
{
private:
	T m_array[size];

public:
	T *getArray()
	{
		return m_array;
	}

	T &operator [](int index)
	{
		return m_array[index];
	}
};

template <typename T, int size>
void print(StaticArray<T, size> &array)
{
	for (int i = 0; i < size; ++i)
		cout << array[i] << "  ";
	cout << endl;
}

// ***  template<typename T, int size>�� ���ø��� ���� �Լ��� typename T�� ���ؼ��� ���ø� Ư��ȭ
template<int size> // int size�� ���ø����� ���P��
void print(StaticArray<char, size> &array) // <char,size> �� char�� �־��־    char�� ���ؼ��� Ư��ȭ�� ����
{
	for (int i = 0; i < size; ++i)
		cout << array[i];
	cout << endl;
}

// *** Ŭ�������� ����Լ��� �κ������� Ư��ȭ �Ҷ����� ������ Ŭ������ ����� �޾Ƽ� <char, size> �̷������θ� �ٲٴ� ����� ����. ***  �ٽú���  13.6

int main()
{
	StaticArray<int, 4> int4;

	int4[0] = 1;
	int4[1] = 2;
	int4[2] = 3;
	int4[3] = 4;

	print(int4);

	StaticArray<char, 10> char10;

	for (int i = 0; i < 10; ++i)
		char10[i] = i + 65;

	print(char10); // <-- ���⼱ char�Ƿ� Ư��ȭ�� �Լ��� ȣ�x��

	return 0;
}