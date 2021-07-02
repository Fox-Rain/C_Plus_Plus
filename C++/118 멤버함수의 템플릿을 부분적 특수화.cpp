#include<iostream>

using namespace std;

template <typename T, int size>
class Array_BASE // 베이스가 되는 클래스
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

// 아래처럼 상속을 통해서 클래스의 멤버함수의 템플릿을 부분적으로 특수화 할 수 있다.
// 특수화할 멤버함수 말고는 다른 클래스내의 것들은 다시 구현할 필요가 없다. (상속을 했으므로)
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