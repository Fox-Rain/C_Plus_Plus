#include<iostream>
#include<assert.h>

using namespace std;

template <typename T, unsigned int T_size> // *** <- �̷������� ���ø� �Ķ�̷��� ����� �� �ִ�.  ( ���ø��� ������ ������ Ÿ�ӿ� �˷����־�� �Ѵ�. )
class MyArray
{
private:
	// int m_length;   <-- �̰� ��ſ� ������ template���� �Ķ���ͷ� T_size�� �����
	T *m_data;

public:
	MyArrray()
	{
		m_data = new T[T_size]; // �̷������� ������ ����ó�� ����� ��
	}

	~MyArray()
	{
		delete[] m_data;
	}
};

// *** �׸��� ���� template<T, unsgined int T_size> �� ���  cpp���Ϸ� ���Ǹ� �Űܼ� explicit instantiation�� �ϰ� �ȴٸ�,    <char, 1> <char, 2>  ... �̷������� ��� ���ڿ� ���ؼ� instantiation�� �ؾ��ϰ� �ǹǷ�
//     ���Ǹ� cpp ���Ϸ� �ű�� ���� �����ؾ� �Ѵ�.

int main()
{
	MyArray<double, 100> my_arr; // ***     std::array <double, 100> �� ���� �����̴�.   *** ���ø� �Ű������� ��� ��Ÿ�ӿ� ������ �Ұ����ϴ�. ��, ������Ÿ�ӿ� ������ �Ǿ��־�� �Ѵ�. <double, x> <--- �Ұ���

	return 0;
}