#include<iostream>
#include<cassert>
#include<initializer_list>
using namespace std;

class IntArray
{
private:
	unsigned m_length = 0;
	int *m_data = nullptr;

public:
	IntArray(unsigned length)
		:m_length(length)
	{
		m_data = new int[length];
	}

	IntArray(const std::initializer_list<int> &list)		// #include<initializer_list> 하고 난뒤 만든 "생성자"
		:IntArray(list.size())
	{
		int count = 0;
		for (auto &element : list)							// 이런식으로만 구현가능.
		{
			m_data[count] = element;
			++count;
		}
		// for (unsigned count = 0; count < list.size(); ++count)
		//   m_data[count]=list[count];   							<-- Error  이니셜라이즈 리스트는 []을 제공하지 않음.
	}

	~IntArray()
	{
		delete[] this->m_data;
	}

	friend ostream &operator<<(ostream &out, const IntArray &arr)
	{
		for (unsigned int i = 0; i < arr.m_length; ++i)
			out << arr.m_data[i] << " ";
		out << endl;

		return out;
	}
};

int main()
{
	int my_arr[5] = { 1,2,3,4,5 };
	int *my_arr2 = new int[5]{ 1,2,3,4,5 };

	auto i1 = { 10,20,30 };					// #include<initializer_list>하여서 사용할 수 있음.   이니셜라이제이션리스트 라는 변수명을 갖게됨.

	IntArray int_array{ 1,2,3,4,5 };		// 위에 initializer_list 생성자를 만들어 주었기 때문에 이런식으로 이용이 가능함.
	cout << int_array << endl;

	return 0;
}