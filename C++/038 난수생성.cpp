#include<iostream>
#include<cstdlib>	// std::srand(), std::rand()�� �̿��ϱ� ���ؼ� include
#include<ctime>		// std::time() �� �̿��ϱ� ���ؼ� include

using namespace std;

int main()
{
	// std::srand(����);		std::srand(); ()�ȿ� ���� ���ڸ� seed_Number��� �ϴµ�, seed_Number�� ���� �����Ǵ� ������ �����ϴ�.
	std::srand(5252);					// �õ尪�� 5252 �� �Է�
	for (int i = 0; i < 100; ++i)
	{
		cout << std::rand() << endl;	//  ����غ��� ������ ������ �������ڰ� �ݺ��Ǵ°� �� �� �ִ�.	��, seed���� ������ ���� ���ڰ� ������ ������ �ݺ��ȴ�.
	}

	// ���� ������ ���� ������ ����� �ʹٸ�, seed_Number���� ���÷� �ٲپ� �ָ� �ȴ�.
	std::srand(static_cast<unsigned int>(std::time(0)));	// static_cast <unsigned int> (std::time(0))�� ���� ������ seed�� ����

	for (int count = 1; count < 100; ++count)
	{
		cout << std::rand() << "\t";

		if (count % 5 == 0)
			cout << endl;
	}
	return 0;
}