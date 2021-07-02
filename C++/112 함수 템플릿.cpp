// 함수 템플릿
// ******** 템플릿은 꼭 컴파일타임에 결정되어야 한다. ********* //
#include<iostream>

using namespace std;

class Cents
{
private:
	int m_Cents;

public:
	Cents(int cents)
		:m_Cents(cents)
	{}

	friend ostream &operator <<(ostream &out, const Cents &cents)
	{
		cout << cents.m_Cents << "cents";
		return out;
	}

	friend bool operator > (const Cents &c1, const Cents &c2)
	{
		return c1.m_Cents > c2.m_Cents;
	}
};


template<typename T> // T이라는 템플릿 자료형을 만든것         형식 --->    template<typename 템플릿명>   또한  template<class 템플릿명> 이런식으로 쓰이기도 한다.

T getMax(T x, T y) // 템플릿은 여러 인자를 받을 수 있다.   컴파일러가 알아서 자료형을 찾아서 계산해줌.
{
	return (x > y) ? x : y;
}

/*
// 아래와 같은 함수 오버로딩을 줄일 수 있는것이 템플릿의 장점이다.
int getSum(int x,int y)
{
	return x+y;
}

double getSum(double x, double y)
{
	return x+y;
}
........
*/

int main()
{
	// 아래처럼 알아서 컴파일러가 오버로딩함
	cout << getMax(1, 3) << endl; // 3             T-> int
	cout << getMax(3.14, 1.12) << endl; // 3.14    T-> double

	// 클래스에서도 템플릿을 사용할 수 있다.    단, 함수에서 필요한 연산의 연산자 오버로딩이 구현되어있어야 한다.
	cout << getMax(Cents(5), Cents(3)) << endl; // 템플릿으로 클래스연산을 할때에는 클래스안에 필요한 연산자 오버로딩이 다 구현되어있는지 잘 확인하여야 한다.       5 Cents가 출력



	return 0;
}