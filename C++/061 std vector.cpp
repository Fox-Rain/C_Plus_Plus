// vector�� ����    vector�� �����Ҵ��� ������ �����༭ �޸� ������ �Ͼ�� �ʴ´�.
#include<iostream>
#include<vector>

using namespace std;

int main()
{
	std::vector<int> array;

	std::vector<int> array2 = { 1,2,3,4,5 };
	cout << array2.size() << endl;           // 5

	std::vector<int> array3{ 1,2,3 };
	cout << array3.size() << endl;           // 3 



	std::vector<int> array_ = { 1,2,3,4,5,6,7 };

	for (auto &itr : array_)
		cout << itr << " ";
	cout << endl;

	array_.resize(50);             // .resize()   �迭�� ũ�⸦ �ٲ۴�.  50���� �ٲ�
	cout << array_.size() << endl; // ����غ��� 50���� �ٲ���� �� �� �ִ�.

	return 0;
}