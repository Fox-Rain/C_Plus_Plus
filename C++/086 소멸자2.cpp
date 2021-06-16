#include<iostream>

using namespace std;

class IntArray
{
private:
	int *m_arr = nullptr;
	int m_length = 0;

public:
	IntArray(const int &length_in) // 생성자
	{
		m_length = length_in;
		m_arr = new int[m_length]; // 생성자 안에서 동적할당

		cout << "constructor" << endl;
	}

	~IntArray() // 소멸자
	{
		if (m_arr != nullptr) // 만약 동적할당된 배열이 nullptr이 아니라면
			delete[] m_arr; // 메모리를 삭제해줌
	}

	int size()
	{
		return m_length;
	}
};

int main()
{
	while (1)
	{
		IntArray m_int_arr(10000); // 위에서 소멸자를 사용하여 동적할당을 삭제해주므로 메모리 누수가 일어나지 않는다.
	}
	return 0;
}