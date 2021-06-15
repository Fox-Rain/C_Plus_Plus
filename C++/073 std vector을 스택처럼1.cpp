#include<iostream>
#include<vector>

using namespace std;

void printStack(const std::vector<int> &stack) // ������ ���͸� ������ �޾ƿ�
{
	for (auto &e : stack) // ���͸� for each������ ���
		cout << e << " ";
	cout << endl;
}

int main()
{
	std::vector<int> stack;

	stack.push_back(3);
	printStack(stack);  // 3

	stack.push_back(5);
	printStack(stack);  // 3 5

	stack.push_back(7);
	printStack(stack);  // 3 5 7

	stack.pop_back();
	printStack(stack);					// 3 5

	stack.pop_back();
	printStack(stack);					// 3

	stack.pop_back();
	printStack(stack);					//

	return 0;
}