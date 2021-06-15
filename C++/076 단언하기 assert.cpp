#include<iostream>
#include<cassert>		// assert.h   <<< *** ����� ��忡���� ����� (�������忡�� ������ �ȵ�)
#include<array>

using namespace std;

void printValue(const std::array<int, 5> &my_arr, const int &ix)
{	// assert�� ��Ÿ�ӿ� �˷���.
	assert(ix >= 0);					// assert�� ����ϸ� ����� ��忡�� ������Ͽ� ��Ÿ�ӿ������� �߰ԵǸ�, assert�� ���� �Ѱ���
	assert(ix <= my_arr.size() - 1);	// �������� �����â�� ����ְԵȴ�. ( �ٸ� ���α׷��ӵ��� ���� ã�⿡ ����)
										// �ּ����������ε�, �ּ����� �� ���� �Ҽ� �ִ�.
	cout << my_arr[ix] << endl;
}

int main()
{
	std::array<int, 5> my_arr{ 1,2,3,4,5 };

	printValue(my_arr, 100);			// ��Ÿ�ӿ����� ���� ��� (100�� �迭�� ũ�⸦ �����Ƿ� ��Ÿ�ӿ����� �߻���)



	const int x = 10;
	// static_assert �����Ϸ��� �˷��� (Ÿ�����Ҷ�)
	static_assert(x == 10, "x should be 5 ");	// x�� 10���� �������� ������ �������� �׾���. (Ÿ���� ������ ���̱� ���Ͽ� �����) 
												// ���� �ڿ� " " �� �ּ��� �޾� �� �� �ִ�.

	return 0;
}