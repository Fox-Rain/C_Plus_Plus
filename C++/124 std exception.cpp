// STL exception
#include<iostream>
#include<exception> // exception stl
#include<string>

using namespace std;

// custom exception                       
class CustomException :public std::exception // std:: exception의 상속을 받음
{
public:
	const char *what() const noexcept // what()을 override해줌 
	{
		return "Custom exception";
	}
};

int main()
{
	try
	{
		std::string s;
		s.resize(-1); // 잘못된값일 경우, 자체적으로 포함되어있는 Exception을 throw해준다.
	 // throw std::runtime_error("Bad thing happend");    <--- 이런식으로 exception안에 포함되어있는 자식클래스의 Error을 throw 해줄 수도 있다.   (stl exception의 많은것들을 가져다 throw 할 수 있다.)
	 // throw CustomException();  <--- 이것도 마찬가지로 exception의 상속을 받았으므로 catch(exception &exception)을 통해서도 받을 수 있다.
	}
	catch (exception &exception)
	{
		cerr << exception.what() << endl; // exception.what()  <-- 예외처리된 이유를 리턴
	}

	return 0;
}