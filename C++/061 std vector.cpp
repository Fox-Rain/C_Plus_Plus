// vector의 장점    vector는 동적할당후 저절로 없애줘서 메모리 누수가 일어나지 않는다.
#include<iostream>
#include<vector>

using namespace std;

int main()
{
	std::vector<int> array;

	std::vector<int> array2 = { 1,2,3,4,5 };
	cout << array2.size() << endl;           // 5

	std::vector<int> array3{ 1,2,3 };
	cout << array3.size() << endl;           // 3 



	std::vector<int> array_ = { 1,2,3,4,5,6,7 };

	for (auto &itr : array_)
		cout << itr << " ";
	cout << endl;

	array_.resize(50);             // .resize()   배열의 크기를 바꾼다.  50으로 바꿈
	cout << array_.size() << endl; // 출력해보면 50으로 바뀐것을 알 수 있다.

	return 0;
}