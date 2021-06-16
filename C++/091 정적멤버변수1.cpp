#include<iostream>

using namespace std;

class Something
{
public:                 // ����ƽ�ɹ��� ����� �θ� �ȵǰ� CPP���� �ȿ� �����ؾ� �Ѵ�.
	static int s_value; // ���� ��������� Ŭ�����ȿ��� ���� �����ϴ�.  ��, static int s_value=1024; �̷������� �ʱ�ȭ�� �Ұ���
};

int Something::s_value = 1; // �̷������� �ʱ�ȭ�� �Լ� �ۿ��� ���־�� �Ѵ�.

int main()
{
	// �Ʒ��� �ڵ带 �����غ��� �� �� �ֵ�, ������������� Ŭ���� ��ü�� ����� ���� �ȾƵ� ������. ����ü�� �ٸ����� ���� ����Ǿ� ����
	// ������������� �ϳ��� ���� ��ü�� �����ȴ�. (���� ����� Ŭ���� ��ü���� �̿��ص� ������������� �ּҴ� ��ġ�ϴ� ���� ���� �� �� �ִ�.)
	cout << &Something::s_value << " " << Something::s_value << endl; // 00007FF6EEB9D010 1

	Something some1;
	Something some2;

	// �̷��� �ٸ� ��ü�� �ҷ��ͼ� ���� �ٲپ �ϳ��� ������������� �ٲ�.
	some1.s_value = 2;
	some2.s_value = 3;

	cout << &some1.s_value << " " << some1.s_value << endl; // 00007FF6EEB9D010 3
	cout << &some2.s_value << " " << some2.s_value << endl; // 00007FF6EEB9D010 3

	Something::s_value = 1024; // �̷������� Ŭ������ü�� ������ �ʰ�, ���� �����Ͽ��� �ٲ� ���� �ִ�.

	cout << &Something::s_value << " " << Something::s_value << endl; // 00007FF6EEB9D010 1024

	return 0;
}