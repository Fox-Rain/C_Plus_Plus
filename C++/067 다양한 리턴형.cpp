#include<iostream>
#include<array>

using namespace std;

int &get(std::array<int, 100> &my_arr, int ix) // �������� ������ �� ���� �ִ�.
{
	return my_arr[ix]; // my_arr[ix]�� ������ ������.
}

int main()
{
	std::array<int, 100>my_arr;
	my_arr[30] = 10;

	get(my_arr, 30) = 1024; // get���� my_arr[30]�� "����" �����ϹǷ� 1024�� �ְԵǸ� my_arr[30]�� �ƿ� 1024�� �ٲ�� �ȴ�.

	cout << my_arr[30] << endl; // 1024 ���

	return 0;
}