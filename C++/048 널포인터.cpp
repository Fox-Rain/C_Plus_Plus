// Null pointer  널 포인터란   아무주소도 안가지고 있는 포인터를 의미함.
// 함수에서 파라미터로 변수를 받게되면 그변수는 독립적으로 다른곳에 저장된다. (값을 복사해가서 다른 곳에 저장함)
#include<iostream>

using namespace std;

void PTR(double *ptr)	// ptr역시 포인터"변수"이기 때문에 메인함수에서 값을 복사하여 다른곳에 저장된다.
{
	cout << "ptr 포인터값: " << ptr << " ptr포인터를 저장한 메모리 주소는 " << &ptr << endl;	// 포인터가 가르키는주소  포인터변수가 저장된주소 가 출력됨
}

int main()
{
	double *ptr = nullptr;

	if (ptr != nullptr)
	{
		// doSomething...
	}
	else
	{
		// doSomething...
	}

	cout << "ptr포인터의 값은 " << ptr << " ptr포인터를 저장한 메모리 주소는 " << &ptr << endl;
	// ptr포인터의 값 (즉,저장한값 주소) 0000000000000000   ptr포인터를 저장한 주소 (저장한값주소를 저장한 주소) 0000001BF60FF508

	PTR(ptr);
	// ptr포인터의 값 (즉,저장한값 주소) 0000000000000000   ptr포인터를 저장한 주소 (저장한값주소를 저장한 주소) 000000FFD3F4F930
	// 함수에서 ptr역시 파라미터로 받게 되면 저장되는 메모리가 다르다.

	return 0;
}