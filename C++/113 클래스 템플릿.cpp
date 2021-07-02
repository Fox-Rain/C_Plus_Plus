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
	MyArray() // 생성자
	{
		m_length = 0;
		m_data = nullptr;
	}

	MyArray(int length) // length를 받아서 그만큼 동적할당해주는 생성자
	{
		m_data = new T[length];
		m_length = length;
	}

	~MyArray() // 소멸자
	{
		reset();
	}

	void reset() // 소멸자에서 호출되는 함수로 할당된 메모리를 os에 되돌리는 과정이 담김
	{
		delete[] m_data;
		m_data = nullptr;
		m_length = 0;
	}

	T &operator[](int index) // [] operator 오버로딩
	{
		assert(index >= 0 && index < m_length);
		return m_data[index];
	}

	int getLength() // length를 리턴하는 함수
	{
		return m_length;
	}

	/*
	void print() // 배열의 원소들을 출력하는 함수
	{
		for (int i = 0; i < m_length; ++i)
			cout << m_data[i] << " ";
		cout << endl;
	}
	*/
	void print(); // 클래스내의 함수를 밖으로 뺄 경우
};

// 클래스내의 함수의 정의를 함수 밖으로 빼는 경우 //
template<typename T>
void MyArray<T>::print() // *** 클래스내에 있는 함수의 정의만 밖으로 뺄경우 MyArray<T> 이런식으로 template을 <>을 통해 작성해 주어야 한다.
{
	for (int i = 0; i < m_length; ++i)
		cout << m_data[i] << " ";
	cout << endl;
}

// ***** template이 사용되어있는 클래스내의 함수의 정의를 아예 다른 CPP파일로 빼는 경우 ***** //
/*
	즉, 대충 구조가 main.cpp , main.cpp가 include하는 헤더파일, 헤더파일안에 있는 클래스의 함수중 정의 부분을 따로 저장하는 cpp 파일이 있는 구조라고 해보자.
	main.cpp는 헤더파일을 include하였기 때문에 헤더파일에 있는 함수를 호출할 수 있다. 그런데 헤더파일의 함수를 호출했을때, 함수의 선언은 헤더파일에 있으나 정의는 따른 cpp파일에 있기에  정의가 되어있는 cpp파일은 또 따로 컴파일이
	되어야한다.  즉, 그래서 linking Error가 발생하는데  이때 해결하기위해서는 아래와 같은 과정을 정의가 들어있는 cpp파일에서 해 주어야 한다.
*/
// Explicit instantiation // 
// template void MyArray<원하는 타입>::print();      <- 즉, 컴파일러에게 MyArray 클래스안에 print()함수에 대해서 <>안의 자료형으로 컴파일을 하라고 알려주는 것이다.
// 위의 과정이 함수가 많아 복잡할 경우 아예 클래스 자체를 Explicit instantiation 해줄 수도 있다.   ->  template class MyArray<char>;  template class MyArray<int>; .......

int main()
{
	MyArray<int> my_arr(10); // length = 10 으로 하는 객체 생성         *** class에서 template을 사용했다면  클래스명< > 이런식으로 들어갈 자료형을 선언해 주어야 한다.

	for (int i = 0; i < my_arr.getLength(); ++i)
		my_arr[i] = i * 10; // 객체에 0 10 20 30 40 50 60 70 80 90 넣음

	my_arr.print();

	return 0;
}