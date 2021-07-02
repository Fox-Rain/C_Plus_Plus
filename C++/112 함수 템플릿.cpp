// �Լ� ���ø�
// ******** ���ø��� �� ������Ÿ�ӿ� �����Ǿ�� �Ѵ�. ********* //
#include<iostream>

using namespace std;

class Cents
{
private:
	int m_Cents;

public:
	Cents(int cents)
		:m_Cents(cents)
	{}

	friend ostream &operator <<(ostream &out, const Cents &cents)
	{
		cout << cents.m_Cents << "cents";
		return out;
	}

	friend bool operator > (const Cents &c1, const Cents &c2)
	{
		return c1.m_Cents > c2.m_Cents;
	}
};


template<typename T> // T�̶�� ���ø� �ڷ����� �����         ���� --->    template<typename ���ø���>   ����  template<class ���ø���> �̷������� ���̱⵵ �Ѵ�.

T getMax(T x, T y) // ���ø��� ���� ���ڸ� ���� �� �ִ�.   �����Ϸ��� �˾Ƽ� �ڷ����� ã�Ƽ� �������.
{
	return (x > y) ? x : y;
}

/*
// �Ʒ��� ���� �Լ� �����ε��� ���� �� �ִ°��� ���ø��� �����̴�.
int getSum(int x,int y)
{
	return x+y;
}

double getSum(double x, double y)
{
	return x+y;
}
........
*/

int main()
{
	// �Ʒ�ó�� �˾Ƽ� �����Ϸ��� �����ε���
	cout << getMax(1, 3) << endl; // 3             T-> int
	cout << getMax(3.14, 1.12) << endl; // 3.14    T-> double

	// Ŭ���������� ���ø��� ����� �� �ִ�.    ��, �Լ����� �ʿ��� ������ ������ �����ε��� �����Ǿ��־�� �Ѵ�.
	cout << getMax(Cents(5), Cents(3)) << endl; // ���ø����� Ŭ���������� �Ҷ����� Ŭ�����ȿ� �ʿ��� ������ �����ε��� �� �����Ǿ��ִ��� �� Ȯ���Ͽ��� �Ѵ�.       5 Cents�� ���



	return 0;
}