#include<iostream>
#include<array>

using namespace std;

void printLength(array<int, 5>my_array)    // �Ķ���ͷ� ������ �ִ� �ͺ���, ������ ������ �ӵ��� ������.   ���⼭�� array<>�� ������ �ִ� ���̱� ������ �� ���� �� �ִ�.
{
	cout << my_array.size() << endl;
}

int main()
{
	std::array<int, 5>my_array = { 1,2,3,4,5 }; // std:;array<�ڷ���,�迭ũ��>�迭�� = {}; �� �ʱ�ȭ

	cout << my_array.size() << endl;  // .size()�� �迭�� ũ��(��Ұ���)�� ����

	return 0;
}