// 대입연산자 오버로딩과 복사생성자(=)을 사용할때의 차이점
#include<iostream>
#include<cassert>
using namespace std;

class Mystring
{
	// private:
public:
	char *m_data = nullptr;
	int m_length = 0;

public:
	Mystring(const char *source = "")
	{
		assert(source);

		m_length = std::strlen(source) + 1;
		m_data = new char[m_length];

		for (int i = 0; i < m_length; ++i)
			m_data[i] = source[i];

		m_data[m_length - 1] = '\0';
	}
	// "깊은 복사"
	Mystring(const Mystring &source)		// 앞의 9.9-1에서의 문제점을 해결하기 위해 복사생성자를 설정해줌.
	{										// 새로운 생성자에게 복사될 생성자 자체를 넘기는것이 아닌 독립되게 동적할당을 해줌.
		cout << "copy constructor called" << endl;

		m_length = source.m_length;

		if (source.m_data != nullptr)
		{
			m_data = new char[m_length];

			for (int i = 0; i < m_length; ++i)
				m_data[i] = source.m_data[i];
		}
		else
			m_data = nullptr;
	}

	Mystring &operator=(const Mystring &source)	// 연산자 = 오버로딩		(대입연산자 오버로딩)
	{
		cout << "Assignment operator" << endl;

		if (this == &source)					// 자기자신에 자기자신을 대입할 경우
			return *this;						// 자기자신을 리턴하여서  자기자신에 대입하는 오류를 막음.

		delete[] m_data;						// 대입하기 전 가지고 있는 메모리가 있을지 모르니 지워버림
												// ex) int x=3; 여기서 x=4을 대입할거면 그전에 있던 x에 3을 지워야 겠죠?
		m_length = source.m_length;

		if (source.m_data != nullptr)			// 대입되는게 널포인터가 아니라면  대입을 받게된다.
		{										// 아래가 대입을 받게되는 과정  "깊은복사"임. 동적할당된 메모리를  대입받기 문에
			m_data = new char[m_length];

			for (int i = 0; i < m_length; ++i)
				m_data[i] = source.m_data[i];
		}
		else
			m_data = nullptr;

		return *this;
	}

	~Mystring()
	{
		delete[] m_data;
	}

	char *getString() { return m_data; }
	int getLength() { return m_length; }
};

int main()
{
	Mystring hello("Hello");

	{
		Mystring copy = hello;
	}															// copy의 소멸자가 호출됨. 단 깊은복사를 하였기 때문에 독립적으로 동적할당 하였으므로
																// copy의 동적할당이 지워지지 hello의 동적할당된 메모리는 지워지지 않음.
	cout << hello.getString() << endl;							// 이젠 깊은 복사로 인해 독립적으로 동적할당 되었으므로 지워지지 않았고 잘 출력이 됨.

	// 복사생성자가 실행될와 대입연산자 오버로딩이 실행될 의 차이 " 둘다 =을 이용할시 " //
	Mystring str1 = hello; // <- Mystring str1(hello); 와 동치	// 이때는 생성과 동시에 복사되므로 "복사 생성자"가 호출된다.

	Mystring str2;												// 여기서 생성자가 호출됨 (생성되는 시기므로)
	str2 = hello;												// 이는 생성이 된후에 대입이 되는것이므로 "대입 연산자"가 호출된다.

	return 0;
}

/* 걍 #include<string>하고 string 쓰면 된다........ */