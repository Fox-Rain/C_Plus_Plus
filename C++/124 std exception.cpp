// STL exception
#include<iostream>
#include<exception> // exception stl
#include<string>

using namespace std;

// custom exception                       
class CustomException :public std::exception // std:: exception�� ����� ����
{
public:
	const char *what() const noexcept // what()�� override���� 
	{
		return "Custom exception";
	}
};

int main()
{
	try
	{
		std::string s;
		s.resize(-1); // �߸��Ȱ��� ���, ��ü������ ���ԵǾ��ִ� Exception�� throw���ش�.
	 // throw std::runtime_error("Bad thing happend");    <--- �̷������� exception�ȿ� ���ԵǾ��ִ� �ڽ�Ŭ������ Error�� throw ���� ���� �ִ�.   (stl exception�� �����͵��� ������ throw �� �� �ִ�.)
	 // throw CustomException();  <--- �̰͵� ���������� exception�� ����� �޾����Ƿ� catch(exception &exception)�� ���ؼ��� ���� �� �ִ�.
	}
	catch (exception &exception)
	{
		cerr << exception.what() << endl; // exception.what()  <-- ����ó���� ������ ����
	}

	return 0;
}