#include<iostream>

using namespace std;

class Simple
{
private:
	int m_id;

public:
	Simple(const int &id_in) // ������
		:m_id(id_in)
	{
		cout << "Constructor!" << endl;
	}

	~Simple() // �Ҹ���  �Ҹ��ڴ� >>>  ~zŬ������(){}  ���� �����Ѵ�.   ���� �μ��� ���� �ʴ´�.
	{
		cout << "Destructor!" << endl;
	}
};

int main()
{
	// �Ҹ��ڴ� �ڱ��� �޸𸮰� ������� ȣ���� �ȴ�.
	Simple sim1(0);
	Simple sim2(0);

	int dummy = 0;

	return 0; // ���⼭ ���α׷��� �����Ƿ� �޸𸮰� ������� ������ �Ҹ��ڰ� �����


	// �����Ҵ��� ���
	// delete sim1;  << �̶� �޸𸮰� �����ǹǷ� �̶� �Ҹ��ڰ� ����ȴ�.
}