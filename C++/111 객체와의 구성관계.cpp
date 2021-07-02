// ��ü�� ������ �������� (��ü�� ��ǰ�̶�� �����ִ�.)	
#include<string>
#include<iostream>

using namespace std;

// �Ʒ��� �ڵ忡���� class���� �� ���� ���� ����� ��������, �� ���ε��� ��������� ���� �����ϴ°��� ����.
class Position2D
{
private:
	int m_x;
	int m_y;

public:
	Position2D(const int &x_in, const int &y_in)
		:m_x(x_in), m_y(y_in)
	{}

	void set(const Position2D &pos_target)
	{
		set(pos_target.m_x, pos_target.m_y);
	}


	void set(const int &x_target, const int &y_target)
	{
		m_x = x_target;
		m_y = y_target;
	}

	friend std::ostream &operator <<(std::ostream &out, const Position2D &pos2D) // >> overloading 
	{
		out << pos2D.m_x << " " << pos2D.m_y;
		return out;
	}
};

class Monster
{
private:
	string m_name;
	Position2D m_location; // sub class

public:
	Monster(const string &name, const Position2D &pos_in) // ������
		:m_name(name), m_location(pos_in)
	{}

	void moveTo(const Position2D &pos_target)
	{
		m_location.set(pos_target);
	}

	friend std::ostream &operator <<(std::ostream &out, const Monster &monster) // >> overloading 
	{
		out << monster.m_name << " " << monster.m_location;
		return out;
	}

};


int main()
{
	Monster mon1("Pikachu", Position2D(0, 0)); // mon1

	// while (1) // Game loop
	{
		cout << mon1 << endl; // pikachu 0 0

		mon1.moveTo(Position2D(1, 2));

		cout << mon1 << endl; // pikachu 1 2
	}

	return 0;
}