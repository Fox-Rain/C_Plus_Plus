// const와 포인터
#include<iostream>

using namespace std;

int main()
{
	// const int *ptr
	int value = 5;
	int value_ = 4;

	const int *ptr = &value;       // ** 포인터에서 const로 초기화하는것은 포인터의 값 즉, 포인터에 들어가는 주소값을 변경하지 않겠다는 의미가 아니라,
								   // ** 포인터에 들어가는 주소에 저장되는 값을 변화시키지 않겠다는 의미이다.
	// ptr = &value_;          <<< 이런식으로 포인터안에 들어가는 값인 주소는 바꿀수 있음.
	// *ptr = 3;               <<< 이런식으로 주소가 가르키는 값은 변할 수 없음



	// int *const ptr
	int *const ptrr = &value;     // ** 위와 반대로 포인터의 주소값은 변화시킬수 없으나 값은 변화시킬 수 있다.



	const int value1 = 5;					// const 로 변수 고정시
	const int *ptr1 = &value1;				// 포인터를 선언하려면 포인터도 const로 고정해야함.
	// *ptr=4;								<<  de-referencing 해서 바꾸는게 불가능.  const 로 고정되었기 때문에.
	cout << *ptr1 << endl;					// de-referencing 해서 출력하는것은 가능. 




	int value2 = 4;							// 변수 고정 x
	const int *ptr2 = &value2;				// 포인터만 const로 고정 할 수 있음.
	value2 = 3;								// value2는 고정이 아니므로 대입 바꿀수 있지만 *ptr2=3;는 불가능.
	cout << value2 << " " << *ptr2 << endl;	// 출력해보면 value2나 *ptr2(역참조)나 값이 3으로 같은 것을 알 수 있다.





	// const int *const ptr=&value;			// 주소값, 주소안에 값 둘다 바꾸지 못함. 다 상수로 됨.
	int value = 5;
	const int *const ptrrr = &value;

	//*ptrrr = 10;						 <<  들어가는 주소를 바꾸지도 못하고 그주소안에 들어가는 역참조 값도 바꾸지 못함.		
	///ptrrr = &value2;	


	return 0;
}