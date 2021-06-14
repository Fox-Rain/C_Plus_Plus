#include<iostream>
#include<typeinfo>		// typeid().name()을 이용하기위해서 include


using namespace std;

int main()
{
	// typeid(값 or 변수명).name()		<--- 값또는 변수명의 자료형을 리턴함
	cout << typeid(4.0).name() << endl;	// 값 입력

	auto a = 23;
	cout << typeid(a).name() << endl;	// 변수명 입력

	// dobule -> float, double -> int 등 큰자료형에서 작은 자료형으로 형변환시 절삭이 될 수 있으므로 주의하기.

	return 0;
}