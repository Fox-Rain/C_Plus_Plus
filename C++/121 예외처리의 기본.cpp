#include<iostream>
#include<fstream>
#include<string>

using namespace std;

// 1) �������и� return������ ������   -1�� ��µǸ� �Լ��� �����۵����� ���� ��
int findFirstChar(const char *string, char ch)
{
	for (std::size_t index = 0; index < strlen(string); ++index)
	{
		if (string[index] == ch)
			return index;
	}

	return -1; // no match    return -1
}

// 2) boolŸ�� flag�� �����Ͽ��� �����۵� ������ �ľ�
//    �Ǵٸ� ���δ� ���ϰ��� bool�Ͽ��� �����۵� ������ �ľ��ϱ⵵ ��
double divide(int x, int y, bool &success)
{
	if (y == 0)
	{
		success = false;
		return 0.0;
	}

	success = true;
	return static_cast<double>(x) / y;
}

int main()
{
	// ���α׷��� ������ ����� �۵��ߴ��� Ȯ���ϴ� ��� //
	// 2)
	bool success; // bool flag;

	double result = divide(5, 3, success);

	if (success) // success == true
		cout << result;
	else // success == false
		cout << "Error!";


	// ����ó�� 
	// ����ó���� ���� 1) , 2)�� �͵��� �Ϻ��� Ŀ���ϴ� ���� �ƴϴ�.   �ֳ��ϸ� ����ó���� �����ս� �κп��� ũ�� ���� �� �� �ֱ� �����̴�.
	// *** ������ �� ���� ���� �Ͼ ��� ������ ���ܵ� ���α׷��� ������Ѿ� �ϴ� ��� (ex) ����) ����ó���� ���� ����Ѵ�.

	// try, catch, throw //
	double x;
	cin >> x;

	try // ������ ���� ������ �ִ� �κ��� try�� �ֽ��ϴ�.
	{
		if (x < 0.0) // sqrt 0�� ��� �Ұ����ϹǷ�,
			throw std::string("Negative input"); // throw�� Error�� ��Ƽ� �����ݴϴ�.

		cout << std::sqrt(x) << '\n'; // �������� ���
	}

	catch (std::string error_message) // catch������ throw���� ������ Error message�� �޾Ƽ� 
	{
		// do Something to respond   ������ �ذ��ϱ����� ������ �մϴ�.
		cout << error_message << '\n';
	}

	// *** throw�� catch������ �ڷ����� �� ��Ȯ�� �������־���Ѵ�.  (���� �����̶� �ٸ� �ڷ����� ��� throw�� error message�� catch�� ����� �Ѿ�� �ʴ´�. ��, Auto casting�� �ȵȴ�.

	return 0;
}