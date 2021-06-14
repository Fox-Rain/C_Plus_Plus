// continue는 { }을 빠져나가는 것이 아니라		continue뒤에 실행을 건너뛰고 맨뒤로간다.
#include<iostream>

using namespace std;

int main()
{
	for (int i = 1; i <= 10; ++i)
	{
		if (i % 2 == 1) continue;		// i을 2로나누었을때 나머지가 있으면, 홀수므로 continue를 만나 뒤에 cout이 실행되지 않고 ++i로 건너뛴다.
		cout << "짝수: " << i << endl;
	}
	// continue 사용시 주의할점 >>> 만약 실수로 count++같은 실행을 넘어가게 되버리면, 무한루프에 빠질 수 있으니 주의해야한다.
	return 0;
}