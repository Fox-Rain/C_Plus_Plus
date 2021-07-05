#include<iostream>
#include<memory> // smart pointer

using namespace std;

class A
{
public:
	~A()
	{
		throw "Error"; // *** �Ҹ��ڿ����� throw�� ����� �� ����.
	}
};


int main()
{
	// (1) �޸� ������ �Ͼ �� �ִ�. //
	try
	{
		int *i = new int[1000000]; // �����Ҵ��� ����

		// do something with i and Error...
		throw "Error"; // ����ó���� �߻��ؼ� Error�� throw    ---> ������ �ڵ�� �����Ű�� �ʰ� catch�� �̵��ϰ� ��

		delete[] i; // throw "Error" ������ delete �����Ҵ��� �����ϴ� �ڵ�� ������� �ʰ� ���õǹ����Ƿ�, �޸� ������ �Ͼ �� �ִ�.

		// ���ǰ��� ��Ȳ������ �ذ������δ� "����Ʈ������"�� �̿��ϸ� �ȴ�.
		unique_ptr<int> up_i(i); // <-- unique_ptr�� �̿��ϰԵǸ� �˾Ƽ� *** scope���� �����ԵǸ� �Ҵ��� �������ش�.
	}
	catch (...)
	{
		cout << "Catch in main()" << endl;
	}

	// (2) �Ҹ��ڿ����� throw�� ����� �� ����.
	try
	{
		A a;
	}
	catch (...)
	{
		cout << "catch in main()2" << endl;
	}

	// (3) �����ս��� ���ϵȴ�. (������)    �� ����ó���� �����Ҽ����� �������� ��ü�� �� �� ���°��� ����ϱ�.  (������ �����ų� , �����°ų� ���...??)

	return 0;
}