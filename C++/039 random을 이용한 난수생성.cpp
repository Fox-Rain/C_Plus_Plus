// #include<random>을 이용하여서 난수 만들기
#include<iostream>
#include<random>

using namespace std;

int main()
{
	std::random_device rd;						// random_device	
	std::mt19937 mesenne(rd());					// mt19937 은 32bits, mt19937_64 은 64bits의 난수를 생성해준다.   mesenne이라는 변수 설정.
	std::uniform_int_distribution<>dice(1, 6);	// uniform_int_distribution int형 정수의 나올확률이 동일하게 범위를 설정  
												// (이경우 1~6의 값이 동일한 확률로 나오게 된다.)
	for (int count = 1; count <= 20; count++)
		cout << dice(mesenne) << " ";

	return 0;
}

/* std::random_device rd;
std::mt19937 mersenne(rd());
std::uniform_int_distribution<> dice(1, 6);
random_device는 시드를 만드는거고, mt19937은 시드를 주면 32비트로 표현할 수 있는 랜덤한 양수를 만드는 것
uniform_int_distribution은 메르센 트위스터로 만든 난수를 내부 알고리즘을 이용하여 변환해서 균일분포로 나오게 다듬는 것 */