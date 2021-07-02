#include<iostream>
#include<assert.h>

using namespace std;

template <typename T, unsigned int T_size> // *** <- 이런식으로 템플릿 파라미러토 사용할 수 있다.  ( 템플릿의 값들은 컴파일 타임에 알려져있어야 한다. )
class MyArray
{
private:
	// int m_length;   <-- 이것 대신에 위에서 template에서 파라미터로 T_size을 사용함
	T *m_data;

public:
	MyArrray()
	{
		m_data = new T[T_size]; // 이런식으로 완전히 변수처럼 사용이 됨
	}

	~MyArray()
	{
		delete[] m_data;
	}
};

// *** 그리고 위에 template<T, unsgined int T_size> 의 경우  cpp파일로 정의를 옮겨서 explicit instantiation을 하게 된다면,    <char, 1> <char, 2>  ... 이런식으로 모든 숫자에 대해서 instantiation을 해야하게 되므로
//     정의를 cpp 파일레 옮기는 것은 지양해야 한다.

int main()
{
	MyArray<double, 100> my_arr; // ***     std::array <double, 100> 과 같은 구조이다.   *** 템플릿 매개변수의 경우 런타임에 결정이 불가능하다. 꼭, 컴파일타임에 결정이 되어있어야 한다. <double, x> <--- 불가능

	return 0;
}