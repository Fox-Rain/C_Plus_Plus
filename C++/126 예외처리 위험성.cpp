#include<iostream>
#include<memory> // smart pointer

using namespace std;

class A
{
public:
	~A()
	{
		throw "Error"; // *** 소멸자에서는 throw을 사용할 수 없다.
	}
};


int main()
{
	// (1) 메모리 누수가 일어날 수 있다. //
	try
	{
		int *i = new int[1000000]; // 동적할당을 해줌

		// do something with i and Error...
		throw "Error"; // 예외처리가 발생해서 Error을 throw    ---> 이후의 코드는 실행시키지 않고 catch로 이동하게 됨

		delete[] i; // throw "Error" 때문에 delete 동적할당을 해제하는 코드는 실행되지 않고 무시되버리므로, 메모리 누수가 일어날 수 있다.

		// 위의같은 상황에서의 해결방법으로는 "스마트포인터"를 이용하면 된다.
		unique_ptr<int> up_i(i); // <-- unique_ptr을 이용하게되면 알아서 *** scope에서 나가게되면 할당을 해제해준다.
	}
	catch (...)
	{
		cout << "Catch in main()" << endl;
	}

	// (2) 소멸자에서는 throw를 사용할 수 없다.
	try
	{
		A a;
	}
	catch (...)
	{
		cout << "catch in main()2" << endl;
	}

	// (3) 퍼포먼스가 저하된다. (느려짐)    꼭 예외처리는 예측할수없는 논리적으로 대체를 할 수 없는곳에 사용하기.  (서버가 터지거나 , 벼락맞거나 등등...??)

	return 0;
}