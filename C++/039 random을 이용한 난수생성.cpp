// #include<random>�� �̿��Ͽ��� ���� �����
#include<iostream>
#include<random>

using namespace std;

int main()
{
	std::random_device rd;						// random_device	
	std::mt19937 mesenne(rd());					// mt19937 �� 32bits, mt19937_64 �� 64bits�� ������ �������ش�.   mesenne�̶�� ���� ����.
	std::uniform_int_distribution<>dice(1, 6);	// uniform_int_distribution int�� ������ ����Ȯ���� �����ϰ� ������ ����  
												// (�̰�� 1~6�� ���� ������ Ȯ���� ������ �ȴ�.)
	for (int count = 1; count <= 20; count++)
		cout << dice(mesenne) << " ";

	return 0;
}

/* std::random_device rd;
std::mt19937 mersenne(rd());
std::uniform_int_distribution<> dice(1, 6);
random_device�� �õ带 ����°Ű�, mt19937�� �õ带 �ָ� 32��Ʈ�� ǥ���� �� �ִ� ������ ����� ����� ��
uniform_int_distribution�� �޸��� Ʈ�����ͷ� ���� ������ ���� �˰����� �̿��Ͽ� ��ȯ�ؼ� ���Ϻ����� ������ �ٵ�� �� */