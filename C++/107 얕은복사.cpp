#include<iostream>
#include<cassert>

using namespace std;

class Mystring
{
public:
	char *m_data = nullptr; // ���ڿ� �޴� ������ �ȿ� nullptr
	int m_length = 0;

public:
	Mystring(const char *source = "") // charŸ�� �����ͷ� ���ڿ��� ����    default parameter�� ""   ��, ���ڿ��� �Ķ����
	{
		assert(source);

		m_length = std::strlen(source) + 1; // +1�����Ͽ� ���ɸ��� �ڸ����� Ȯ���� ���ڿ��� ���� m_length
		m_data = new char[m_length]; // �׷��� ���� m_length��ŭ�� charŸ�Թ迭�� �����Ҵ�

		for (int i = 0; i < m_length; ++i) // �迭�� �ϳ��ϳ� for���� ���� ��������
			m_data[i] = source[i];

		m_data[m_length - 1] = '\0'; // ������ �迭���ҿ� ���ɸ��� ����
	}

	~Mystring() // �Ҹ���
	{
		delete[] m_data; // �迭�� ����
	}

	char *getString() { return m_data; } // char* ���������� ���ڿ� ����

	int getLength() { return m_length; }
};

int main()
{
	// �⺻ ��������ڸ� ���� ���������� �ʰ� ����Ǵ°��� "��������" ��� �Ѵ�
	// ��������ڸ� �̿��Ͽ� �����Ҵ�� ��ü�� ������ �� ���� ����    *�ǵ��� �ٸ��� ������ �����Ҵ� �޸𸮸� ����� �� ���� ������ ��������.*
	Mystring hello("hello");

	cout << (int *)hello.m_data << endl; // hello�� m_data�� ��� (int�� ����ȯ�Ͽ� char�迭 ���)
	cout << hello.getString() << endl; // hello�� m_data�� ���

	{
		Mystring copy = hello; // �������� ��ü copy�� hello�� �����Ͽ� ����(��������ڰ� ����� ����)

		cout << (int *)copy.m_data << endl; // hello�� �� ���
		cout << copy.getString() << endl; // hello�� �� ���
	}

	// ***** ���⼭ copy�� ���������Ƿ� �������, ������� �Ҹ��ڰ� ����� ��, delete[] m_data;
											// ��ücopy�� ��ühello�� m_data�� �����Ͽ� ������ ��ü�Ƿ� hello.m_data�� ������ ������ �ȴ�.
	cout << hello.getString() << endl;		// �տ��� ��ücopy�� ���ؼ� hello�� �����Ҵ�� m_data �޸𸮰� ���� �Ǿ����Ƿ� �޸𸮰��� ���� ���� �ʴ�.
											// ���� �ҷ����� ���ϰ� �ǰ� ��Ÿ�� ������ �߻��ϰ� �ȴ�.
	return 0;
}