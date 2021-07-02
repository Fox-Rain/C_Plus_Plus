#include<iostream>

using namespace std;

template<typename T, int size>
class  StaticArray
{
private:
	T m_array[size];

public:
	T *getArray()
	{
		return m_array;
	}

	T &operator [](int index)
	{
		return m_array[index];
	}
};

template <typename T, int size>
void print(StaticArray<T, size> &array)
{
	for (int i = 0; i < size; ++i)
		cout << array[i] << "  ";
	cout << endl;
}

// ***  template<typename T, int size>ÀÇ ÅÛÇÃ¸´À» °¡Áø ÇÔ¼ö¸¦ typename T¿¡ °üÇØ¼­¸¸ ÅÛÇÃ¸´ Æ¯¼öÈ­
template<int size> // int sizeÀº ÅÛÇÃ¸´À¸·Î ³öŠP°í
void print(StaticArray<char, size> &array) // <char,size> ·Î charÀ» ³Ö¾îÁÖ¾î¼­    char¿¡ °üÇØ¼­¸¸ Æ¯¼öÈ­¸¦ ÇØÁÜ
{
	for (int i = 0; i < size; ++i)
		cout << array[i];
	cout << endl;
}

// *** Å¬·¡½º³»ÀÇ ¸â¹öÇÔ¼ö¸¦ ºÎºĞÀûÀ¸·Î Æ¯¼öÈ­ ÇÒ¶§¿¡´Â ¸ÇÀ§ÀÇ Å¬·¡½ºÀÇ »ó¼ÓÀ» ¹Ş¾Æ¼­ <char, size> ÀÌ·±½ÄÀ¸·Î¸¸ ¹Ù²Ù´Â ¹æ¹ıÀ» ¾´´Ù. ***  ´Ù½Ãº¸±â  13.6

int main()
{
	StaticArray<int, 4> int4;

	int4[0] = 1;
	int4[1] = 2;
	int4[2] = 3;
	int4[3] = 4;

	print(int4);

	StaticArray<char, 10> char10;

	for (int i = 0; i < 10; ++i)
		char10[i] = i + 65;

	print(char10); // <-- ¿©±â¼± char¹Ç·Î Æ¯¼öÈ­µÈ ÇÔ¼ö°¡ È£­xµÊ

	return 0;
}