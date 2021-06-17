// �������� �Ϲ� �ڷ����� ��� ���� �����Ͽ� �����ϹǷ� R-value ��, ���
// �������� ���� �ڷ����� ��� ���� ����ü�� �����ϹǷ� L-value ��, ����
#include<iostream>
#include<cassert> // assert() �� ����ϱ� ���ؼ� include   assert�� ����ϰ� �Ǹ� ��Ÿ�ӿ� ������ ��Ÿ�� ��� ������â�� ���������� �˷��ش�.

using namespace std;

class IntList
{
private:
	int m_list[10] = { 1,2,3,4,5,6,7,8,9,10 };

public:
	int &operator[](const int index) // []������ �����ε�
	{
		// assert �� ����Ͽ��� 0 <= index < 10 ���� �̿ܿ��� ������ ��Ÿ������
		assert(index >= 0);
		assert(index < 10);

		return m_list[index]; // ���� ���ԵǾ���ϴ°��� �����ϴ� ���̹Ƿ�  ������ ������
	}

	const int &operator[](const int index) const // const�� �پ������Ƿ� �Լ������� ���� �ٲ� �� ����  (const�� �������ν� �����ε�)��
	{
		assert(index >= 0);
		assert(index <= 0);

		return m_list[index];
	}
};

int main()
{
	IntList my_list;
	my_list[1] = 1;

	cout << my_list[1] << endl;

	IntList *list = new IntList;

	(*list)[3] = 1;					// list�� IntListŬ������ ������ü�� ������, (*list)�� ������ü ����ü�Ƿ� �� ���°� ���ü[3]
									// �� �ǰ� �Ǿ ������ �����ε����� ���Ͽ� ������ ����������.

	return 0;
}