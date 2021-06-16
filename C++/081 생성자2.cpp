#include<iostream>

using namespace std;

class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:
	Fraction(const int &num_in, const int &den_in = 1) // 생성자에 인수를 넣을 수 있다.
	{
		m_numerator = num_in;
		m_denominator = den_in;
		cout << "Welcome to Fraction!" << endl;
	}

	Fraction() {} // 디폴트 생성자     위에처럼 사용자가 생성자를 선언하게 되면 디폴트 생성자는 사라지게되는데, 이런식으로 다시 디폴트 사용자를 선언해 줄 수 있다.

	void print()
	{
		cout << m_numerator << "/" << m_denominator << endl;
	}
};

int main()
{
	Fraction one_third(1, 3);	// 선언되면서 실행됨.  인수를 넣기때문에 one_third(1,3) 이런식으로 ()을 붙여줌

	one_third.print();			// 1 / 3 출력

	Fraction dft;				// *** 이런 인수받지않는 인스턴스를 생성하기 위해선 다른생성자를 만들었다면 디폴트생성자가 지워지으므로
								// *** 다시 디폴트 생성자를 클래스 안에 만들어 줘야 한다.
								// *** 인수를 안받는 인스턴스를 선언하는 경우 () 도 빼준다. dft() (x)   dft (o)

	/* (생성자 만들때 주의할점)
	만약 생성자가 Fraction(){}	와  Fraction(const int& num=1, const int& num2=2){} 가 예를 들어 있다고 하면
	Fraction 객체명; 을 하게되면 문제가 발생한다. 둘중 어느 생성자를 통해 선언해야 할지 모호 하기 문이다.
	왜냐하면 "Fraction()은 인수를 받지 않고, Fraction(const.... ) 또한 마찬가지로 기본값이 존재하기 때문에 인수를 안받는 경우도 가능하기 문에"
	애매한 상황이 발생하게 되고 컴파일러는 이것을 오류로 판단하게 된다.																		  */

	Fraction one__third = Fraction{ 1, 3 };	// private 에서 public으로 생성자를 만들었으므로 {} << 이 uniform initialization으로도 초기화 가능.
											// {}로 초기화 할시 ()와 다르게 안에있는 숫자를 형변환 할 수 없다. < {}가 더 엄격하다 보면 된다.>
	one__third.print();

	return 0;
}