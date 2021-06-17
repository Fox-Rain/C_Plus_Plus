#include<iostream>
#include<cassert>

using namespace std;

class Mystring
{
public:
	char *m_data = nullptr; // 문자열 받는 포인터 안에 nullptr
	int m_length = 0;

public:
	Mystring(const char *source = "") // char타입 포인터로 문자열을 받음    default parameter로 ""   즉, 빈문자열이 파라미터
	{
		assert(source);

		m_length = std::strlen(source) + 1; // +1까지하여 널케릭터 자리까지 확보한 문자열의 길이 m_length
		m_data = new char[m_length]; // 그렇게 구한 m_length만큼의 char타입배열을 동적할당

		for (int i = 0; i < m_length; ++i) // 배열에 하나하나 for문을 통해 대입해줌
			m_data[i] = source[i];

		m_data[m_length - 1] = '\0'; // 마지막 배열원소엔 널케릭터 대입
	}

	~Mystring() // 소멸자
	{
		delete[] m_data; // 배열을 지움
	}

	char *getString() { return m_data; } // char* 리턴형으로 문자열 리턴

	int getLength() { return m_length; }
};

int main()
{
	// 기본 복사생성자를 통해 독립적이지 않게 복사되는것을 "얕은복사" 라고 한다
	// 복사생성자를 이용하여 동적할당된 객체를 복사할 시 유의 할점    *의도와 다르게 원본의 동적할당 메모리를 지울게 될 수도 있으니 주의하자.*
	Mystring hello("hello");

	cout << (int *)hello.m_data << endl; // hello의 m_data를 출력 (int로 형변환하여 char배열 출력)
	cout << hello.getString() << endl; // hello의 m_data를 출력

	{
		Mystring copy = hello; // 지역변수 객체 copy을 hello로 복사하여 생성(복사생성자가 실행될 것임)

		cout << (int *)copy.m_data << endl; // hello의 값 출력
		cout << copy.getString() << endl; // hello의 값 출력
	}

	// ***** 여기서 copy는 지역변수므로 사라지고, 사라질때 소멸자가 실행됨 즉, delete[] m_data;
											// 객체copy가 객체hello의 m_data을 복사하여 생성된 객체므로 hello.m_data을 삭제해 버리게 된다.
	cout << hello.getString() << endl;		// 앞에서 객체copy에 의해서 hello에 동적할당된 m_data 메모리가 삭제 되었으므로 메모리값이 남아 있지 않다.
											// 따라서 불러오지 못하게 되고 런타임 에러가 발생하게 된다.
	return 0;
}