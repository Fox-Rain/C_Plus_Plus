#include<iostream>

using namespace std;

class Simple
{
private:
	int m_id;

public:
	Simple(const int &id_in) // 생성자
		:m_id(id_in)
	{
		cout << "Constructor!" << endl;
	}

	~Simple() // 소멸자  소멸자는 >>>  ~z클래스명(){}  으로 선언한다.   또한 인수를 받지 않는다.
	{
		cout << "Destructor!" << endl;
	}
};

int main()
{
	// 소멸자는 자기의 메모리가 사라질때 호출이 된다.
	Simple sim1(0);
	Simple sim2(0);

	int dummy = 0;

	return 0; // 여기서 프로그램이 끝나므로 메모리가 사라지기 때문에 소멸자가 실행됨


	// 동적할당의 경우
	// delete sim1;  << 이때 메모리가 해제되므로 이때 소멸자가 실행된다.
}