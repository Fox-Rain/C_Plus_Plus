#include<iostream>

using namespace std;

int main()
{
	int apple = 5;
	cout << apple << " " << &apple << endl;			// 5	00CFFE88	

	{
		apple = 1;									// 여기서의 apple은 자료형이 붙지 않았으므로, 다른 지역변수 apple을 의미함 따라서 apple은 모두 같은 변수,주소
		cout << apple << " " << &apple << endl;		// 1	00CFFE88
	}
	cout << apple << " " << &apple << endl;			// 1	00CFFE88


	int orange = 3;
	cout << orange << " " << &orange << endl;		// 3	00CFFE7C	 다른 지역변수 orange

	{
		int orange = 5;								// 여기서의 orange는 자료형이 붙었으므로 새 지역변수로 초기화된것임. 따라서 다른 지역변수orange랑 주소가 다름
		cout << orange << " " << &orange << endl;	// 5	00CFFE70	지역변수 orange
	}
	cout << orange << " " << &orange << endl;		// 3	00CFFE7C	처음 지역변수 orange

	return 0;
}