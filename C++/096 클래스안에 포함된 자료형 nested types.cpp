#include<iostream>

using namespace std;

class Fruit
{
public:
	enum FruitType // enum Ŭ���� FruitType
	{
		Apple,  // 0
		Banana, // 1
		Cherry  // 2
	};

private:
	FruitType m_type;

public:
	Fruit(FruitType type) // Fruit ������     �μ��� FruitType (enum class)�� ����
		:m_type(type)
	{}

	FruitType getType() { return m_type; }
};

int main()
{
	Fruit apple(Fruit::Apple);

	if (apple.getType() == Fruit::Apple)
		cout << "Apple" << endl;

	return 0;
}