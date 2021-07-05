#include<iostream>

using namespace std;

// ����ó�� Ŭ���� 
class Exception
{
public:
	void report()
	{
		cerr << "Exception report" << endl;
	}
};

// ����ó�� Ŭ���� ���
class ArrayException :public Exception // ���� ����ó�� Ŭ���� Expection�� ��ӹ���
{
public:
	void report() // report() �����ε�
	{
		cerr << "Array exception" << endl;
	}
};

class MyArray
{
private:
	int m_data[5];

public:
	int &operator [](const int &index) // []�����ڿ����ε��� ���ؼ� �迭�� ���� �������ִ� �Լ�
	{
		if (index < 0 || index>5) // ���� index������ ���� �ʴ´ٸ�
		{
			// *** throw�� �ϳ��� �� �� ���� // �� if������ throw�� �ѹ� �Ǹ� if���� ����
		 // throw - 1; // throw -1�� ��         <--- *** ��ó�� ����Լ��ȿ����� throw�� �� �� �ִ�.
		 // throw Exception(); // Exception() Ŭ������ throw��
			throw ArrayException(); // *** ArrayException�� Exception�� ����� �޾����Ƿ�, catch(Exception)���ε� ���� �� �ִ�.
		}
		return m_data[index];
	}
};

void doSomething()
{
	// ����Լ��� ����ó�� //  throw -> catch
	MyArray my_arr;

	try
	{
		my_arr[100]; // my_arr[100] index = 100�� ���� �����Ϸ�����. ���� []���� �˰����� index > 5�̹Ƿ� throw -1�� �ϰ� �ɰ���.
	}
	catch (const int &x) // throw -1 �� ���� catch(const int &x)�� ���� ���̰� �Ʒ��� ������ ��µ�.
	{
		cerr << "Exception" << endl;
	}
	catch (Exception &e) // throw Exception() �Ȱ��� catch(Exception &e)�� ��Եǰ� �Ʒ��� Exception class�� �޼ҵ带 ȣ����
	{
		e.report();
		// throw e   VS   throw //
	 // throw e; // *** re-throw �ٽ� ������ throw���־ ���� catch���� �ٽ� �ذ��� �� �ֵ��� �� �� �ִ�. ���⼭ Exception���� �޾ұ� ������ (ArrayException�̾�� Exception���� throw��)
		throw; // *** �׳� throw�� ���� �ڷ����̹��� ������� �״�� throw���ش� ( ArrayException���� �޾Ҵٸ� ArrayException���� �״�� �����ش�.)
	}

}
int main()
{
	// ����Լ��� ����ó���� �����ϴ�. //
	try
	{
		doSomething();
	}
	catch (Exception &e) // ***  ���������� throw���� catch�� �ްԵǸ� ���Ŀ� ������ ���޴°� ������ catch���� �ٽ� ���� ������ throw���־ ���⼭�� ó���� �� �ִ�.
	{
		cerr << "main Exception" << endl;
	}

	return 0;
}