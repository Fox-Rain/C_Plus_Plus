#include<iostream>

using namespace std;

class point
{
private:
	double m_x;
	double m_y;
	double m_z;

public:
	point(double x = 0.0, double y = 0.0, double z = 0.0) // point ������ default parameter�� 0.0���� �ʱ�ȭ �Ǿ� ����
		:m_x(x), m_y(y), m_z(z)
	{}

	double getX() { return m_x; }
	double getY() { return m_y; }
	double getZ() { return m_z; }

	friend std::ostream &operator<<(std::ostream &out, const point &p) // �������� "ostream�� ����"�̾�� �������� �̿��Ͽ� cout���� ���������� ����� �����ϴ�.
	{
		out << p.m_x << " " << p.m_y << " " << p.m_z;

		return out;
	}

	friend std::istream &operator>>(std::istream &in, point &p) // �������� istream�� �������� �Ѵ� ������! ���������� �Է¹ޱ� ���ؼ�
	{                                                           // ���� point &p�� �Է¹޴� ���̱� ������ const�� �������� ���ƾ� �Ѵ�.
		in >> p.m_x >> p.m_y >> p.m_z;

		return in;
	}
};

int main()
{
	point harang, min;

	cin >> harang >> min; // ������ �����ε��� ���ؼ� ��ü�� �Է¹ޱ�
	cout << harang << " " << min; // ������ �����ε��� ���ؼ� ��ü���� ����ϱ�

	return 0;
}