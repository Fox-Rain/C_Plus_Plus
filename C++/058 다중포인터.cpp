#include<iostream>

using namespace std;

int main()
{
	int *ptr = nullptr;
	int **ptrptr = nullptr;  // ** 다중 포인터

	int value = 5;

	ptr = &value;
	ptrptr = &ptr;  // value의 주소를 가지고있는 변수 ptr의 주소를 대입함

	cout << ptrptr << "    " << *ptrptr << "    " << **ptrptr << endl; // 포인터변수의 주소    value변수의 주소    5     ( **은 de-reference를 두번해준 것)

	return 0;
}