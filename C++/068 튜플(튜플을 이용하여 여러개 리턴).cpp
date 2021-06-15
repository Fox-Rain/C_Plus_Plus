#include<iostream>
#include<tuple>     // 튜플 라이브러리를 이용하게 되면 함수에서 여려개의 리턴값을 만들 수 있다.

using namespace std;

std::tuple<int, double> getTuple()  // tuple을 리턴형으로     std::tuple<자료형,자료형.....>   <>안의 인자들은 원하는 리턴자료형을 의미
{
	int i = 10;
	double d = 3.14;

	return std::make_tuple(i, d);   // std::make_tuple(리턴할변수, 리턴할변수...)
}

int main()
{
	std::tuple<int, double> my_tp = getTuple(); // 튜플자료형 my_tp를 초기화함.

	cout << std::get<0>(my_tp) << endl; // std::get<튜플에서 꺼내올 값의 순서>(튜플명)으로 튜플안의 값을 리턴
	cout << std::get<1>(my_tp) << endl; // std::get<튜플에서 꺼내올 값의 순서>(튜플명)으로 튜플안의 값을 리턴

	return 0;
}