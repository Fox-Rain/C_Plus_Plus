#include<iostream>

using namespace std;

class IntArray
{
private:
	int *m_arr = nullptr;
	int m_length = 0;

public:
	IntArray(const int &length_in) // ������
	{
		m_length = length_in;
		m_arr = new int[m_length]; // ������ �ȿ��� �����Ҵ�

		cout << "constructor" << endl;
	}

	~IntArray() // �Ҹ���
	{
		if (m_arr != nullptr) // ���� �����Ҵ�� �迭�� nullptr�� �ƴ϶��
			delete[] m_arr; // �޸𸮸� ��������
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
		IntArray m_int_arr(10000); // ������ �Ҹ��ڸ� ����Ͽ� �����Ҵ��� �������ֹǷ� �޸� ������ �Ͼ�� �ʴ´�.
	}
	return 0;
}