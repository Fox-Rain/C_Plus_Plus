#include<iostream>
#include<cstdlib>	// std::srand(), std::rand()을 이용하기 위해서 include
#include<ctime>		// std::time() 을 이용하기 위해서 include

using namespace std;

int main()
{
	// std::srand(숫자);		std::srand(); ()안에 들어가는 숫자를 seed_Number라고 하는데, seed_Number에 따라서 생성되는 난수가 일정하다.
	std::srand(5252);					// 시드값을 5252 로 입력
	for (int i = 0; i < 100; ++i)
	{
		cout << std::rand() << endl;	//  출력해보면 패턴을 가지고 같은숫자가 반복되는걸 알 수 있다.	즉, seed값이 같으면 같은 숫자가 패턴을 가지고 반복된다.
	}

	// 따라서 무작위 값이 나오게 만들고 싶다면, seed_Number값을 수시로 바꾸어 주면 된다.
	std::srand(static_cast<unsigned int>(std::time(0)));	// static_cast <unsigned int> (std::time(0))을 통해 무작위 seed를 생성

	for (int count = 1; count < 100; ++count)
	{
		cout << std::rand() << "\t";

		if (count % 5 == 0)
			cout << endl;
	}
	return 0;
}