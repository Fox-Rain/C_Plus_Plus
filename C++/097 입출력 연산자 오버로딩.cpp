#include<iostream>

using namespace std;

class point
{
private:
	double m_x;
	double m_y;
	double m_z;

public:
	point(double x = 0.0, double y = 0.0, double z = 0.0) // point 생성자 default parameter가 0.0으로 초기화 되어 있음
		:m_x(x), m_y(y), m_z(z)
	{}

	double getX() { return m_x; }
	double getY() { return m_y; }
	double getZ() { return m_z; }

	friend std::ostream &operator<<(std::ostream &out, const point &p) // 리턴형이 "ostream의 참조"이어야 리턴형을 이용하여 cout으로 연쇄적으로 출력이 가능하다.
	{
		out << p.m_x << " " << p.m_y << " " << p.m_z;

		return out;
	}

	friend std::istream &operator>>(std::istream &in, point &p) // 리턴형이 istream의 참조여야 한다 무조건! 연쇄적으로 입력받기 위해서
	{                                                           // 또한 point &p는 입력받는 것이기 때문에 const로 고정하지 말아야 한다.
		in >> p.m_x >> p.m_y >> p.m_z;

		return in;
	}
};

int main()
{
	point harang, min;

	cin >> harang >> min; // 연산자 오버로딩을 통해서 객체에 입력받기
	cout << harang << " " << min; // 연산자 오버로딩을 통해서 객체에서 출력하기

	return 0;
}