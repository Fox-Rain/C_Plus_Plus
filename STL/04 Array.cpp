// array
// std::array�� ������ ũ���� �迭�� ���� �����̳ʷ�, �ݺ��ڶ���� ���Կ����ڸ� ����� �� �ֽ��ϴ�. (��, algorithm������ �޼ҵ带 array������ �� �� �ֽ��ϴ�.)
// ����� array�� ũ�Ⱑ 0�� ��� array.begin()==array.end()�̸�  front()�� back()�� ����� �� �����ϴ�.
#include<iostream>
#include<array>

using namespace std;

int main()
{
	// ���� 
	std::array<int, 3> arr = { 1,2,3 }; // std::array<�ڷ���, ����> �迭�� ={�ʱ�ȭ};
	std::array<int, 3>arr_copy;

	arr_copy = arr; // std::array�� �Ϲ� �迭�� �ٸ��� ���Կ����ڸ� ���ؼ� ������ �� �ִ�.



	// at()
	std::array<int, 5> arr1 = { 1,2,3,4,5 };
	cout << arr1.at(3) << endl; // �Ϲݹ迭�� �ٸ��� at()�� ����� �� �ִ�. at�� []�� �ٸ��� �迭������ üũ�մϴ�.



	// front back        front()�� �Ǿ��ǰ�, back()�� �ڿ����� ������ ������
	std::array<int, 3> arr2 = { 1,3,5 };
	cout << arr2.front() << endl; // 1
	cout << arr2.back() << endl; // 5



	// data         array�� �迭�� ù ���� �ּҰ��� �����մϴ�.
	array<int, 5> arr3 = { 1,2,3,4,5 };
	cout << &arr3[0] << " " << arr3.data() << endl; // cout�غ��� �迭�� ù�ּҿ� .data�� ����



	// �ݺ���
	// begin() cbegin()
	array<int, 3>arr4 = { 2,3,4 };
	array<int, 3>::iterator itr4;
	itr4 = arr4.begin(); // begin()�� array�� �迭 ù������ iterator�� ����

	array<int, 3>::const_iterator itr4_const;
	itr4_const = arr.cbegin(); // cbegin()�� array�� �迭 ù������ const iterator�� ���� ���� �����ҽ� const_iterator�� ����� �ݺ��ڿ� �־���� ��



	// rbegin() crbegin()  �������� ������ (�迭�� �ǵ�)    rend() crend()   ������ �ݺ����� ����(�Ǿ�)�� �����մϴ�.
	array<int, 3>arr5 = { 1,2,3 };

	for (auto ele = arr5.rbegin(); ele != arr5.rend(); ++ele)
		cout << *ele << endl; // 3 2 1



	// empty
	array<int, 3>arr6 = { 1,2,3 };
	array<int, 0>arr6_empty;

	cout << arr6.empty() << endl; // �����ʾ����Ƿ� false
	cout << arr6_empty.empty() << endl; // ��������Ƿ� true



	// fill
	array<int, 5>arr7;
	arr7.fill(7); // �迭�� ��� ()���� ������ ä��ϴ�.  ���� ����� ����ִ����� ()���� ������ ��� ä��ϴ�.

	for (auto &ele : arr7)
		cout << ele << endl; // 7 7 7 7 7



	// swap
	array<int, 3>arr8 = { 1,2,3 };
	array<int, 3>arr8_swap = { 3,4,5 };

	arr8.swap(arr8_swap); // .swap() ()���ǹ迭�� ���� swap�մϴ�.  ��, ���� �迭�� ũ�Ⱑ ���ƾ� �մϴ�.

	return 0;
}