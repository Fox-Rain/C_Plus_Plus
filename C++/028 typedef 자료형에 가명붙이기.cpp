// �����⿡ ������̱� >>> �ڵ带 ���� �� �ְ�, ���������� ����
// ���ڷ����� typedef�� ���ؼ� ������ ���ԵǸ� �ڵ�Ÿ������ ũ�� ���� �� �ִ�.
#include<iostream>
#include<vector>

using namespace std;

int main()
{
	typedef double distance_t;					// typedef �ڷ��� ����		>> distance_t�� double�� ���� ������� �� �� ���� (�̸��� �ٸ���)

	// double �� ���� distance_t�� ���� ������ ���
	double my_distance;
	distance_t your_distance;

	std::cout << sizeof(distance_t) << endl;	// distance_t�� double�� �̸��� �ٸ����̹Ƿ�	8�� ���

	return 0;
}