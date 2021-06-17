// 리턴형이 일반 자료형일 경우 값을 복사하여 전달하므로 R-value 즉, 상수
// 리턴형이 참조 자료형일 경우 값을 그자체로 전달하므로 L-value 즉, 변수
#include<iostream>
#include<cassert> // assert() 을 사용하기 위해서 include   assert를 사용하게 되면 런타임에 에러가 나타날 경우 컴파일창에 에러원인을 알려준다.

using namespace std;

class IntList
{
private:
	int m_list[10] = { 1,2,3,4,5,6,7,8,9,10 };

public:
	int &operator[](const int index) // []연산자 오버로딩
	{
		// assert 를 사용하여서 0 <= index < 10 범위 이외에는 에러가 나타나도록
		assert(index >= 0);
		assert(index < 10);

		return m_list[index]; // 값이 대입되어야하는것을 리턴하는 것이므로  참조로 리턴함
	}

	const int &operator[](const int index) const // const가 붙어있으므로 함수내에서 값을 바꿀 수 없음  (const를 붙임으로써 오버로딩)ㄴ
	{
		assert(index >= 0);
		assert(index <= 0);

		return m_list[index];
	}
};

int main()
{
	IntList my_list;
	my_list[1] = 1;

	cout << my_list[1] << endl;

	IntList *list = new IntList;

	(*list)[3] = 1;					// list는 IntList클래스의 동적객체의 포인터, (*list)는 동적객체 그자체므로 즉 형태가 어떤객체[3]
									// 이 되게 되어서 연산자 오버로딩으로 인하여 대입이 가능해진다.

	return 0;
}