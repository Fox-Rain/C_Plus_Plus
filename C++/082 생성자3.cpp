#include<iostream>

using namespace std;

class Second
{
public:
	Second()
	{
		cout << "class Second constructor()!" << endl;
	}
};

// Ŭ�����ȿ� Ŭ������ �ɹ��� ���� ���   ( ����� ���� �ʱ�ȭ�Ǵ°� �翬�ϹǷ� �ɹ��� �� Ŭ������ ���� ȣ���)
class First
{
	Second sec;   // FirstŬ���� �ȿ� SecondŬ������ ���� sec��� �ν��Ͻ��� �����ؼ� �־���.

public:
	First()
	{
		cout << "class First constructor()!" << endl;
	}
};

int main()
{
	First fs; // ó������ FirstŬ�����ȿ� Second sec;�� �ʱ�ȭ�� ���� ����Ǿ  Second() �������� "class Second constructor()"�� ��µǰ�,
			  // Frist() �����ڰ� ����Ǿ� class First constructor()"�� ��µȴ�.
	return 0;
}