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

// ***  template<typename T, int size>의 템플릿을 가진 함수를 typename T에 관해서만 템플릿 특수화
template<int size> // int size은 템플릿으로 놔둗고
void print(StaticArray<char, size> &array) // <char,size> 로 char을 넣어주어서    char에 관해서만 특수화를 해줌
{
	for (int i = 0; i < size; ++i)
		cout << array[i];
	cout << endl;
}

// *** 클래스내의 멤버함수를 부분적으로 특수화 할때에는 맨위의 클래스의 상속을 받아서 <char, size> 이런식으로만 바꾸는 방법을 쓴다. ***  다시보기  13.6

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

	print(char10); // <-- 여기선 char므로 특수화된 함수가 호춝됨

	return 0;
}