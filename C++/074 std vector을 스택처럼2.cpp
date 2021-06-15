// vector의 경우 퍼포먼스를 중요시하여서 delete[]하는 과정이 내장되어 있지 않다.
#include<iostream>
#include<vector>

using namespace std;

int main()
{
	std::vector<int> v{ 1,2,3 }; // int *v = new int [3]{1,2,3}; 과 같다 (동적할당)

	for (auto &e : v)
	{
		cout << e << endl; // 1 2 3 출력
	}

	cout << v.size() << endl; // v 라는 동적할당된 배열의 크기는 {1,2,3}이므로 .size()로  3 출력

	v.resize(10); // .resize()는 배열의 크기를 재설정한다.   즉  v.resize(10)으로 배열크기를 10으로 재설정

	cout << v.size() << " " << v.capacity() << endl; // 10 10 출력

	for (auto &e : v)
	{
		cout << e << endl; // 다시 실행해보면 알겠지만, resize로 배열의크기가 커졋을 경우 새로생긴 요소는 모두 0이 들어가게 된다. 1 2 3 0 0 0 0 0 0 0
	}

	v.resize(2); // 다시 이번에는 resize로 2로 크기를 줄여봄

	cout << v.size() << " " << v.capacity() << endl;	// 2 10 출력
	// vector의 경우 resize로 사이즈를 줄여도 줄였다고 해서 저장되있던 것들을 delete하는 과정을 하지않는다 (속도를 위해서)
	// 따라서 v.size()로 찍어보면 2가 출력되어 배열크기가 줄어든걸로 보이지만 v.capacity() 로 찍어보면 10으로 저장된 메모리가 그대로 남아있는걸
	// 알 수 있다.    즉, "vector 에서는 메모리를 리사이즈해도 지운척하여 없는척하는것이지 진짜로 지우는 delete[]를 실행하는것이 아니다."

	v.reserve(1024);	// 저장가능한 용량을 1024로 한다는 의미이다. v.resize와 다르게 크기를 늘려도 0으로 값이 들어오지 않음. 그냥 값이 없음.

	return 0;
}