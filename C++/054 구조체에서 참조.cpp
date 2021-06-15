#include<iostream>

using namespace std;

struct Something
{
	int v1;
	float v2;
};

struct Other
{
	Something st;
};

int main()
{
	Other ot;
	// 구조체에 값을 대입할 경우, 아래의 코드처럼 길어질 수 있다.
	ot.st.v1 = 1;
	ot.st.v2 = 2.0f;
	// 이떄 참조를 이용하면 코드를 간결하게 적을 수 있다는 장점이 있다.
	int &ref_v1 = ot.st.v1;
	ref_v1 = 1;

	return 0;
}