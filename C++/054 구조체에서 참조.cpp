#include<iostream>

using namespace std;

struct Something
{
	int v1;
	float v2;
};

struct Other
{
	Something st;
};

int main()
{
	Other ot;
	// ����ü�� ���� ������ ���, �Ʒ��� �ڵ�ó�� ����� �� �ִ�.
	ot.st.v1 = 1;
	ot.st.v2 = 2.0f;
	// �̋� ������ �̿��ϸ� �ڵ带 �����ϰ� ���� �� �ִٴ� ������ �ִ�.
	int &ref_v1 = ot.st.v1;
	ref_v1 = 1;

	return 0;
}