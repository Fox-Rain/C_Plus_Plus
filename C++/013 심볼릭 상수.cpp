// ���α׷����� ������	������Ÿ��(�ҽ��ڵ��ۼ� + ���� ����) --> ��Ÿ��(�ֵܼ��� ���� ���α׷��� ���ư�) ���̴�.
#include<iostream>
#include"My_header.h"		// �ڽ��� ���� ��������� include�Ͽ��� ���������� ������ ����� �� �ִ�.

using namespace std;

int main()
{
	// const  ������ ���� �����Ͽ� �������� ���ϰ� �Ѵ�.
	const double gravity{ 9.8 };	// gravity�� 9.8�� ����.		�ҽ��ڵ忡�� gravity =3; �̷������� �ٸ����� �����Ϸ��� �ϸ� ������Ÿ�ӿ� ������ ����



	// constexpr	vs const
	int num;
	cin >> num;

	const int const_num = num;			// const�� ���� ��Ÿ�ӿ� �����Ǿ �ȴ�. (��, ��Ÿ�ӿ� �Է¹޴°����� ���� �� �� ����)

	constexpr int constexpr_num = 123;	// constexpr�� ���� ������Ÿ�ӿ� �����Ǿ���Ѵ�. (��, ��Ÿ�Կ� �Է¹޴°����� ���� �� �� ����)

	return 0;
}