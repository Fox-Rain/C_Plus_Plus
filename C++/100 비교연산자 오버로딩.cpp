#include<iostream>
#include<vector>

using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0)
	{
		m_cents = cents;
	}

	int getCents() const { return m_cents; }

	int &getCents() { return m_cents; }

	friend bool operator <(const Cents &c1, const Cents &c2)
	{
		return c1.m_cents < c2.m_cents;
	}

	friend ostream &operator<<(ostream &out, const Cents &c)
	{
		out << c.m_cents;
		return out;
	}
};

int main()
{
	vector<Cents>arr(20);

	for (unsigned int i = 0; i < 20; ++i)
	{
		arr[i].getCents() = i;
	}

	return 0;
}