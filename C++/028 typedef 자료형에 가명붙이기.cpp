// 지로향에 가명붙이기 >>> 코드를 줄일 수 있고, 유지보수에 편리함
// 긴자료형을 typedef을 통해서 가명을 쓰게되면 코드타이핑을 크게 줄일 수 있다.
#include<iostream>
#include<vector>

using namespace std;

int main()
{
	typedef double distance_t;					// typedef 자료형 가명		>> distance_t를 double과 같은 기능으로 쓸 수 있음 (이름만 다른것)

	// double 을 쓰나 distance_t을 쓰나 동일한 기능
	double my_distance;
	distance_t your_distance;

	std::cout << sizeof(distance_t) << endl;	// distance_t는 double과 이름만 다른것이므로	8이 출력

	return 0;
}