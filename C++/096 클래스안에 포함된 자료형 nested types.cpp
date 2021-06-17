#include<iostream>

using namespace std;

class Fruit
{
public:
	enum FruitType // enum 클래스 FruitType
	{
		Apple,  // 0
		Banana, // 1
		Cherry  // 2
	};

private:
	FruitType m_type;

public:
	Fruit(FruitType type) // Fruit 생성자     인수로 FruitType (enum class)을 받음
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