#include<iostream>

using namespace std;

// ����ó������ throw�� error massage�� �ڷ����� �´� ù��°�� ������ catch()�� ���� �ȴ�.    ���� ������ catch�� ������ ���Ѵٸ�  runtime Error�� �߻��ϰ� �ȴ�.

/*
	<����ó�� �Ǵٸ� ǥ���>

	void error() throw()  <--- throw()�� ���ܸ� ������ �ʰڴٴ� �ǹ��̰�,    throw(...)�� ���ܸ� �����ڴٴ� �ǹ̷� �Լ����� Ÿ���� ���ֱ⵵�Ѵ�.  (�� �������� X)
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
		first(); // �����ϸ� Ÿ��Ÿ�� ���ÿ� ���̸鼭 second() -> third() -> last()���� ���ڿ�  last()�ȿ��� throw -1�� �־�����. ���� throw �� -1�� ���� catch�� ���ý��� �������� ã�µ�,
	}            // third -> second ���� �����Ƿ� ������ first()���� catch(int)���� �ްԵǰ�, first()������ �ڵ带 �����ѵ� try�� ������, ���� catch(int)�� �������� �ʴ´�.
	catch (int)  // <-- �� ������� ����. �ֳ��ϸ� ���� first()�� catch(int)���� throw�Ȱ��� �޾ұ� ����
	{            // throw�� ������ ���� ���ϸ� �׹��� �ڵ���� ������� �ʴ´�.   (* �ٽ� ����� �غ���)
		std::cerr << "main caught int exception" << endl; // cerr�� cout�� �����ѵ�  ���۸� ��ġ�� �ʰ� ����Ѵٴ� ���� �ٸ���.
	}            // *** ���� throw���� ���� �ڷ����� �´� catch()�� ���� ���, ��Ÿ�ӿ����� �߻��ϰԵȴ�.

	catch (...) // ***  catch(...) ()�ȿ� elllipses��ȣ�� ���ؼ� ���Ÿ���� ���� �� �ִ�.  (catch-all handlers)   ������ó�� �̿�.    
	{
		cerr << "main caught ellipses exception" << endl;
	}

	return 0;
}