#include<iostream>
#include<cmath>
#include<limits>

using namespace std;

int main()
{
	short s = 1;		// 2 bytes
	int i = 1;			// 4 bytes
	long l = 1;			// 4 bytes
	long long ll = 1;	// 8 bytes

	// sizeof(자료형)	<-- 이것을 통해서 바이트를 리턴함

	// #include <limits> //	numeric_linints <자료형>:: max()/min()/lowset()
	cout << std::numeric_limits<short>::max() << endl;		// short로 나타낼 수 있는 가장 큰 수 32767
	cout << std::numeric_limits<short>::min() << endl;		// short로 나타낼 수 있는 가장 작은 수 -32767
	cout << std::numeric_limits<short>::lowest() << endl;	// lowset은 뒤에가서 알 수 있다. -32767

	s = 32767;
	s += 1;				// 예측은 32768
	cout << s << endl;	// 그러나 overflow가 일어나 -32768이 출력되게 된다.		나타낼 수 있는 자료형의 한도를 초과한 값이 되었기 때문이다.
						// 따라서 overflow를 피하도록 자료형을 잘 사용하여야 한다.
	return 0;	
}