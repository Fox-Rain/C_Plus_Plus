#include<iostream>

using namespace std;

int main()
{
	int out_count = 1;

	while (out_count <= 5)
	{
		int in_count = 1;

		while (in_count <= out_count)
		{
			cout << in_count++;
		}
		cout << endl;

		++out_count;
	}


	// while�������� ���ǻ���

	unsigned int count = 10;	// unsigned int ��  �ݺ������� count��ҷ� ���� �����÷ο츦 �����ؾ� �Ѵ�.	( 0�� �ɶ� ���� Overflow )

	while (count >= 0)
	{
		if (count == 0) cout << "zero";
		else cout << count << " ";

		count--;	// ���� �̶� count�� 0�� ���, count--  -1�� �Ǵ°��� �ƴ϶� unsigned �� �����÷ο찡 �߻��� �ſ� ū����� �ٲ�Եȴ�. �װ�� ���ѷ����� �� �� �����Ƿ�
	}				// �����ؾ� �Ѵ�.



	// do while��		*** ���� 1�� �����Ѵٴ� ���� Ư¡�̴�. ***
	// do while���� ���� do�� �����ϰ�, ���� while�� ������ ���� �ٽ� �ڵ带 �������� �����Ѵ�.
	int selection;

	do
	{
		cout << "HaHa" << endl;
		cin >> selection;
	} while (selection <= 0 || selection >= 5);

	return 0;
}