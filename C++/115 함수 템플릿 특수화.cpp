#include<iostream>

using namespace std;

template<class T>
class Storage
{
private:
	T m_value;

public:
	Storage(T value)
	{
		m_value = value;
	}

	~Storage()
	{}

	void print() // *** 일반적인 멤버함수
	{
		cout << m_value << endl;
	}
};

template<> // *** 클래스안의 멤버함수를 템플릿 특수화
void Storage<string>::print() // Storage<string> string템프릿의 객체가 print()을 호출할 경우 이 특수화된 함수를 호출함
{                             // 이것 또한 마찬가지로 선언만 남기고 정의를 cpp파일로 옮기기엔 복잡하므로 요즘은 모두 헤더에 몰아서 남기는쪽으로 코딩을 하는 사례가 많다.
	cout << "String type" << endl;
	cout << m_value << endl;
}




template<typename T>
T getMax(T x, T y)
{
	// if (T == char)                              <--- if문이 불가능하다.  왜냐 template는 컴파일 타임에 결정되어야 하므로, 런타임에 사용되는 if문은 사용할 수 없다.  따라서 아래와 같이 코딩하는것이 좋다.
	//     cout << "Compare char type" << endl;
	return (x > y) ? x : y;
}

template<> // *** 함수 템플릿 특수화       아래의 코드는 char타입의 경우 template 함수를 사용하지말고 이 함수를 사용하라고 컴파일러에게 요청하는 것이다.
char getMax(char x, char y)  // <-- 이런식으로 if문 대신 특정 template에 맞게 따로 코딩을 해주면 된다.
{
	cout << "Warning: comparing char type" << endl;
	return (x > y) ? x : y;
}

int main()
{
	cout << getMax(1.0, 2.0) << endl;
	cout << getMax<double>(1, 2) << endl; // < >을 이용하여서 자료형을 정해 줄 수도 있다.      위의 코드와 완벽히 동치이다.

	cout << getMax('a', 'c') << endl;


	// 클래스에서 템플릿의 경우 < >으로 컴파일타임에서 결정해 주어야 한다.
	Storage<int> nvalue(5);
	Storage<string> svalue("Son");

	nvalue.print(); // int는 특수화된 함수 x   따라서 그냥 일반 멤버함수 호출
	svalue.print(); // svalue는 string타입으로 특수화된 함수가 있으므로 그것을 호출

	return 0;
}