#include<iostream>
#include<cassert>

using namespace std;

class Mystring
{
public:
	char *m_data = nullptr;
	int m_length = 0;

public:
	Mystring(const char *source = "")
	{
		assert(source);

		m_length = std::strlen(source) + 1;
		m_data = new char[m_length];

		for (int i = 0; i < m_length; ++i)
			m_data[i] = source[i];

		m_data[m_length - 1] = '\0';
	}

	// "���� ����"
	Mystring(const Mystring &source) // �տ����� �������� �ذ��ϱ� ���� ��������ڸ� ��������.
	{                                // ���ο� �����ڿ��� ����� ������ ��ü�� �ѱ�°��� �ƴ� �����ǰ� �����Ҵ��� ����.
		cout << "copy constructor called" << endl;

		m_length = source.m_length;

		if (source.m_data != nullptr)
		{
			m_data = new char[m_length];

			for (int i = 0; i < m.length; ++i)
				m_data[i] = source.m_data[i];
		}
		else
			m_data = nullptr;
	}

	~Mystring()
	{
		delete[] m_data;
	}

	char *getString() { return m_data; }

	int getLength() { return m_length; }
};

int main()
{
	return 0;
}