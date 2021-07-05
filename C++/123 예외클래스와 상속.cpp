#include<iostream>

using namespace std;

// 예외처리 클래스 
class Exception
{
public:
	void report()
	{
		cerr << "Exception report" << endl;
	}
};

// 예외처리 클래스 상속
class ArrayException :public Exception // 위의 예외처리 클래스 Expection을 상속받음
{
public:
	void report() // report() 오버로딩
	{
		cerr << "Array exception" << endl;
	}
};

class MyArray
{
private:
	int m_data[5];

public:
	int &operator [](const int &index) // []연산자오버로딩을 통해서 배열의 값을 리턴해주는 함수
	{
		if (index < 0 || index>5) // 만약 index범위가 맞지 않는다면
		{
			// *** throw는 하나만 할 수 있음 // 이 if문에서 throw가 한번 되면 if문을 나감
		 // throw - 1; // throw -1을 함         <--- *** 이처럼 멤버함수안에서도 throw를 할 수 있다.
		 // throw Exception(); // Exception() 클래스를 throw함
			throw ArrayException(); // *** ArrayException은 Exception의 상속을 받았으므로, catch(Exception)으로도 받을 수 있다.
		}
		return m_data[index];
	}
};

void doSomething()
{
	// 멤버함수의 예외처리 //  throw -> catch
	MyArray my_arr;

	try
	{
		my_arr[100]; // my_arr[100] index = 100인 값에 접근하려고함. 위의 []보면 알겠지만 index > 5이므로 throw -1을 하게 될것임.
	}
	catch (const int &x) // throw -1 된 것을 catch(const int &x)가 잡을 것이고 아래의 구문이 출력됨.
	{
		cerr << "Exception" << endl;
	}
	catch (Exception &e) // throw Exception() 된것을 catch(Exception &e)가 잡게되고 아래의 Exception class의 메소드를 호출함
	{
		e.report();
		// throw e   VS   throw //
	 // throw e; // *** re-throw 다시 받은걸 throw해주어서 이후 catch에서 다시 해결할 수 있도록 할 수 있다. 여기서 Exception으로 받았기 때문에 (ArrayException이었어도 Exception으로 throw됨)
		throw; // *** 그냥 throw는 받은 자료형이뭔지 상관없이 그대로 throw해준다 ( ArrayException으로 받았다면 ArrayException으로 그대로 보내준다.)
	}

}
int main()
{
	// 멤버함수도 예외처리가 가능하다. //
	try
	{
		doSomething();
	}
	catch (Exception &e) // ***  원래같으면 throw이후 catch로 받게되면 그후엔 에러를 못받는게 맞지만 catch에서 다시 같은 에러를 throw해주어서 여기서도 처리할 수 있다.
	{
		cerr << "main Exception" << endl;
	}

	return 0;
}