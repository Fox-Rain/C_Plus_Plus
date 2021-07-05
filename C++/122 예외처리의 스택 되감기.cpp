#include<iostream>

using namespace std;

// 예외처리에서 throw된 error massage는 자료형이 맞는 첫번째로 만나는 catch()에 들어가게 된다.    만약 끝까지 catch를 만나지 못한다면  runtime Error가 발생하게 된다.

/*
	<예외처리 또다른 표기법>

	void error() throw()  <--- throw()는 예외를 던지지 않겠다는 의미이고,    throw(...)은 예외를 던지겠다는 의미로 함수옆에 타이핑 해주기도한다.  (잘 쓰이지는 X)
	{
		  .....
	}
*/
void last()
{
	cout << "last" << endl;
	cout << "throw exception" << endl;

	throw - 1;

	cout << "end last" << endl;
}

void third()
{
	cout << "third" << endl;

	last();

	cout << "end third" << endl;
}

void second()
{
	cout << "second" << endl;

	try
	{
		third();
	}
	catch (double)
	{
		cerr << "second caught int exception" << endl;
	}
	cout << "end second" << endl;
}

void first()
{
	cout << "first" << endl;

	try
	{
		second();
	}
	catch (int)
	{
		cerr << "first caught int exception" << endl;
	}
	cout << "end first" << endl;
}

int main()
{
	cout << "Start" << endl;
	try
	{
		first(); // 실행하면 타고타고 스택에 쌓이면서 second() -> third() -> last()까지 간뒤에  last()안엥서 throw -1이 주어진다. 이후 throw 된 -1을 받을 catch를 스택쌓인 방향으로 찾는데,
	}            // third -> second 까지 없으므로 마지막 first()안의 catch(int)에서 받게되고, first()내부의 코드를 실행한뒤 try를 나오고, 그후 catch(int)는 실행하지 않는다.
	catch (int)  // <-- 은 실행되지 않음. 왜냐하면 먼저 first()의 catch(int)에서 throw된것을 받았기 때문
	{            // throw된 에러를 잡지 못하면 그밑의 코드들은 실행되지 않는다.   (* 다시 디버깅 해보기)
		std::cerr << "main caught int exception" << endl; // cerr은 cout과 유사한데  버퍼를 거치지 않고 출력한다는 점이 다르다.
	}            // *** 만약 throw해준 값의 자료형에 맞는 catch()가 없을 경우, 런타임에러가 발생하게된다.

	catch (...) // ***  catch(...) ()안에 elllipses기호를 통해서 모든타입을 받을 수 있다.  (catch-all handlers)   안전망처럼 이용.    
	{
		cerr << "main caught ellipses exception" << endl;
	}

	return 0;
}