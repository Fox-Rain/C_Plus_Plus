// cin>>	�� ���ͳ� �����̽��ٰ� �Էµɶ����� �Է��� �޴´�.

#include<iostream>
#include<string>

using namespace std;

int main()
{
	string my_num = "486";			// string �ڷ����� ��� ���ڸ� �����Ҷ����� ""�� ���μ� ���ڿ��� �־���Ѵ�.

	string str;
	// cin >> str;		�� �� ���, �����̽��ٸ� �Է¹��� ���ϹǷ� �̹����� �����ʾҴ�. (�����̽��Է��ϸ� �Է��� �����Ƿ�)
	std::getline(std::cin, str);	// getline�� �̿��ϸ� �����̽����� �����Ͽ� �Է��� ���� �� �ִ�.

	cout << str << endl;

	// ���ڿ� ��Ģ����
	string a = "hi ";
	string b = "hello";

	cout << a + b << endl;			// �̷������� ���ڿ� ���� ������ �����ϴ�.

	// ���ڿ� ����	length()
	string A = "hello world";
	cout << A.length() << endl;		// .length() ���ڿ��� ���ڰ���(���� ����)�� ������
	return 0;
}