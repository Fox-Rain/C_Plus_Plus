#include<iostream>

using namespace std;

void print(int x = 1024) // (int x = 1024) default parameter을 1024로 설정함.   즉, 인수가 전달이 안될시엔 x에 1024를 대입
{
	cout << x << endl;
}

// default parameter을 설정할때 주의할 점
void print2(int x, int y, int z = 23) {} // 디폴트 파라미터를 채울때는 무조건 오른쪽부터 채워주어야한다.


// 함수의 선언과 정의를 분리하고 default parameter을 설정할떄 주의할 점
void print3(int x = 12, int y = 24, int z = 123); // 선언에 디폴트값을 설정하고

void print3(int x, int y, int z) // 정의에는 디폴트값 설정을 하지 않아야 한다. (한쪽에만 디폴트 값을 너어주어야 함)
{
	cout << x << " " << y << " " << z << endl;
}

int main()
{
	print(10);
	print();  // 아무것도 인수로 넣지 않았으므로 default로 1024 출력

	return 0;
}