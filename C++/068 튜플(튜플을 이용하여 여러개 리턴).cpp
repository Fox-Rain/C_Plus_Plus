#include<iostream>
#include<tuple>     // Ʃ�� ���̺귯���� �̿��ϰ� �Ǹ� �Լ����� �������� ���ϰ��� ���� �� �ִ�.

using namespace std;

std::tuple<int, double> getTuple()  // tuple�� ����������     std::tuple<�ڷ���,�ڷ���.....>   <>���� ���ڵ��� ���ϴ� �����ڷ����� �ǹ�
{
	int i = 10;
	double d = 3.14;

	return std::make_tuple(i, d);   // std::make_tuple(�����Һ���, �����Һ���...)
}

int main()
{
	std::tuple<int, double> my_tp = getTuple(); // Ʃ���ڷ��� my_tp�� �ʱ�ȭ��.

	cout << std::get<0>(my_tp) << endl; // std::get<Ʃ�ÿ��� ������ ���� ����>(Ʃ�ø�)���� Ʃ�þ��� ���� ����
	cout << std::get<1>(my_tp) << endl; // std::get<Ʃ�ÿ��� ������ ���� ����>(Ʃ�ø�)���� Ʃ�þ��� ���� ����

	return 0;
}