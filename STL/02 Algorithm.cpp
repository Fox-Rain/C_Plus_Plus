// Algorithm //
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

bool check_negative(int i)
{
	if (i >= 0)
		return false;
	else
		return true;
}

void print(string &str)
{
	cout << str << " ";
}

bool isOdd(int i)
{
	return i % 2;
}

bool two(int i, int j)
{
	if (i == 2 * j)
		return true;
	else
		false;
}

bool smmp(int i, int j)
{
	return i > j;
}

int biggest(int i, int j)
{
	if (i > j)
		return i;
	else
		return j;
}

int g()
{
	static int g = 1;
	return g++;
}

bool compare(int i, int j)
{
	return i > j;
}
int main()
{
	// all_of (iterator first, iterator second, "���ڸ� �Ѱ��� ������ boolŸ������ ��ȯ������ ���� �����ϴ� �Լ�")
	vector<int>v1 = { 1,3,5,7,9,11 };

	if (std::all_of(v1.begin(), v1.end(), [](int i) {return i % 2; })) // [v.begin(),v.end()) �����ȿ��� [](int i)�� ��� true�ϰ�� true����,  �ϳ��� false�� ��� false ����
		cout << "All number is odd" << endl;



	// any_of (iterator first, iterator second, "���ڸ� �Ѱ��� ������ boolŸ������ ��ȯ������ ���� �����ϴ� �Լ�")
	vector<int>v2 = { 1,3,5,7,-9 };

	if (std::any_of(v2.begin(), v2.end(), check_negative)) // [v.begin(),v.end()) �����ȿ��� [](int i)�� �ϳ��� true�� true, ��� false�� false�� ����
		cout << "Negative is exist" << endl;



	// none_of (iterator first, iterator second, "���ڸ� �Ѱ��� ������ boolŸ������ ��ȯ������ ���� �����ϴ� �Լ�")
	// ��ΰ� false�� true, �ϳ��� true�� �ִٸ� false�� �����Ѵ�.



	// for_each(iterator first, iterator second, "���ڸ� �Ѱ��� ���� �Լ�")     for_each���� �׾ȿ��� ���ڸ� �����ϴ°��� �����ϴ°��� ����. (���� ������ �ʿ��Ҷ� transform �̿��ϱ�)
	vector<string>v3 = { "hello","hi","lol" };

	for_each(v3.begin(), v3.end(), print); // for_each���� ���ؼ� [v3.begin(), v3.end()) ���� ��ŭ print�Լ��� �ݺ��Ѵ� <<< print�Լ� ���ڷδ� vector�� ��ҵ��� ���ʷ� ��.
	cout << endl;                          // hello hi lol�� ��µ�



	// find(iterator first, iterator second, const T &i)    i�� ã�� ���� �ǹ�
	vector<string>v4 = { "hello","hi","coding" };

	std::vector<string>::iterator itr;
	// find�� ã������ ã�� ��� �װ��� �ݺ��ڸ� �����ϰ�, ���� ã�������� ��� end()�� �����Ѵ�.
	itr = std::find(v4.begin(), v4.end(), "coding"); // vector�� ����Ͽ����Ƿ� ���ϰ��� ierator�� ����

	// find�� �ݺ��ڸ��� �迭���� ����� �� �ִ�.
	int myints[] = { 10, 20, 30, 40 };
	int *p;

	p = std::find(myints, myints + 4, 30); // �̶��� �ݺ��ڸ� ������������Ƿ�, �����͸� �̿��Ͽ� ������.
	if (p != myints + 4)
		std::cout << "Element found in myints: " << *p << '\n';
	else
		std::cout << "Element not found in myints\n";



	// find_if(iteator first, iterator second,"���ڸ� �ϳ��� ������ ���ϰ��� bool�� �Լ�")
	vector<int>v5 = { 1,2,3,4,5 };
	std::vector<int>::iterator itr2;
	itr2 = std::find_if(v5.begin(), v5.end(), isOdd); // �̷��� �Ǹ� isOdd����� true�� �Ǵ� ù��° �ݺ��ڸ� �����Ѵ�.  ���� �Ѱ��� ���ٸ� v5.end()�� �����Ѵ�.



	// find_if_not(iterator first, iterator second, "���ڸ� �ϳ��� �޴� �������� bool�� �Լ�")
	vector<int>v6 = { 1,2,3,4,5 };
	std::vector<int>::iterator itr3;
	itr3 = std::find_if_not(v6.begin(), v6.end(), isOdd); // isOdd�� ó������ false�Ǵ� �ݺ��ڸ� ������, ���� false�� �ϳ��� ���ٸ� v6.end()�� �����Ѵ�.



	// find_end
	vector<int>v7 = { 1,3,5,2,4,6,2,3,4,5,1,2,3 };
	int arr7[] = { 1,2,3 };

	std::vector<int>::iterator itr4;
	itr4 = std::find_end(v7.begin(), v7.end(), arr7, arr7 + 3); // find_end(iterator first1, iterator second1, iterator first2, iterator second2)
	cout << "ù��° �κ����� ù���� ���� " << *itr4 << " ���������� �κ������� ������ ù index " << itr4 - v7.begin() << endl; // 1   10



	// count
	vector<string>v8 = { "hello","hi","hi","lol" };

	int str_counting;
	str_counting = std::count(v8.begin(), v8.end(), "hi"); // count(iterator first, iterator second, ã�� ��)  count�� ã�°��� ������ �����Ѵ�.
	cout << str_counting << endl;



	// count_if
	vector<int>v9 = { 1,3,5,7,12,14,12,7 };

	int number_counting;
	number_counting = std::count_if(v9.begin(), v9.end(), [](int i) {return i < 10; }); // count_if(iterator first, iterator second, ���ϰ��� bool�̸鼭 ���ڰ� 1���� ������ �޸� �Լ�) ���ǿ� �´� ���� ����
	cout << number_counting << endl;



	// fill
	vector<string>v10(10);

	std::fill(v10.begin(), v10.end(), "fuxk"); // fill(iterator first, iterator second, ������ value)  fill�� first���� second������ ��� value�� ü���.
	for (int i = 0; i < 10; ++i)
		cout << v10[i] << endl;



	// remove
	vector<int>v11 = { 1,2,3,1,3,2 };

	vector<int>::iterator itr5;
	itr5 = std::remove(v11.begin(), v11.end(), 1); // remove(iterator frist, iterator second, �������� value) ���������� value���� �������� vector�� ���������, "vector�� capacity�� size��
												   // �״�� �����ȴ�. ��, value�� �����ǰ� ����� vector�ڿ� ���ҿ� �����Ⱚ�� ��. {1,2,3,1,3,2} -> {2,3,3,2,2,3}�� ��.
												   // �׸��� remove�� �����Ⱚ�� ���۵Ǵ� index�� iterator�� ������
	for (int i = 0; i < 6; ++i) // 2 3 3 2 2 3 
		cout << v11[i] << endl;



	// remove_if
	vector<int>v12 = { 1,13,12,3,5 };

	vector<int>::iterator itr6;
	itr6 = std::remove_if(v12.begin(), v12.end(), [](int i) {return i > 10; }); // remove(iterator first, iterator second, �μ���1���� ������ ������ boolŸ���� �Լ�)
																				// �Լ��� true�� �����ҽ� �װ��� remove�ϰ� �迭�� ��� + capacity,size�� ���� + ���迭�ڿ� ��������ҵ�
	for (int i = 0; i < 5; ++i) // 1 3 5 3 5 
		cout << v12[i] << endl;



	// sort <- sort�� ��� �������ٹݺ��ڸ� ���ڷ� �� �� �ִ�. ex) vector, deque ��...     �ð����⵵�� O(NlogN)  N=std::distance(first,second)�� ���ǵȴ�.

	// (1)
	vector<int>v13 = { 3,15,4,8,6,1 };
	sort(v13.begin(), v13.end()); // sort(random iterator first, ramdom iterator second)    begin()���� end()-1���� ����

	for (int i = 0; i < 6; ++i) // 1 3 4 6 8 15
		cout << v13[i] << endl;

	// (2)
	vector<int>v14 = { 15,3,2,6,9,3 };
	sort(v14.begin(), v14.end(), smmp); // sort(radom iterator frist, random iterator second, �Լ�(����2���� ������ ���ϰ��� bool))

	for (int i = 0; i < 6; ++i) // 15 9 6 3 3 2
		cout << v14[i] << endl;



	// partition     partition�� ���ؿ� ���� ������ �κ��� iterator�� �����Ѵ�.
	vector<int>v15 = { 1,2,3,4,5,6,7,8,9,10 };
	vector<int>::iterator itr7;
	itr7 = partition(v15.begin(), v15.end(), [](int i) {return i % 2; }); // partition(iterator first, iterator second, boolŸ���� �����ϴ� ���ڰ� �ϳ��� �Լ�(true�� ���ϵɽ� ������ ��ġ�Ѵ�))
																		  // ��, true�ΰ��� ���ʿ� false�ΰ��� ���ʿ� ��ġ������ �װ͵��� ������ �������� �ʴ´�.
	for (int i = 0; i < 10; ++i) // 1 9 3 7	5 6 4 8 2 10
		cout << v15[i] << endl;



	// transform

	// (1) unary transform    �����ϴ� �Լ��� ���ڰ� 1���� ���
	vector<int>v16 = { 14,3,23,6 };
	transform(v16.begin(), v16.end(), v16.begin(), [](int i) {return 2 * i; }); // transform(iterator first, iterator second, �Լ����� ������� ���ϵɰ��� ������ �������, ���� 1���� �Լ�)

	for (int i = 0; i < 4; ++i) // �Լ����� 2*i �ι辿 �ϹǷ�, 28 6 46 12 ��µ�
		cout << v16[i] << endl;

	// (2) binary transform    �����ϴ� �Լ��� ���ڰ� 2���� ���
	vector<int>v17 = { 13,1,5,9,3 };
	vector<int>v18 = { 1,3,7,12,3 };
	transform(v17.begin(), v17.end(), v18.begin(), v17.begin(), biggest); // transform(iterator first, iterator second, �Ǵٸ� �񱳽����� iterator, ��������� iterator, ���ڰ� 2���� �Լ�)
																		  // iterator ó������ �������� �Ǵٸ� iterator ���ۺ��� ���� 1�� 1���� �Լ��� �־� ���ϰ��� ��������� itr�� ����
	for (int i = 0; i < 5; ++i)
		cout << v17[i] << endl;



	// iter_swap
	vector<int>v19 = { 1,13,13,7 };
	iter_swap(v19.begin(), v19.end() - 1); // iter_swap(iterator1, iterator2) iterator���� ���� �ٲ۴�.

	for (int i = 0; i < 4; ++i) // 7 13 13 1
		cout << v19[i] << endl;



	// reverse
	vector<int>v20 = { 1,2,3,4,5,6,7,8,9 };
	reverse(v20.begin(), v20.end()); // reverse(iterator first, iterator second) first ���� second������ ���ҵ��� �Ųٷ� �迭�Ѵ�.

	for (int i = 0; i < 9; ++i)
		cout << v20[i] << endl;



	// *** �Ʒ��� lower_bound , upper_bound�� �������� ���ҵ��� ���� ������ ������ ����� �� �ִ�. //
	// lower_bound �� upper_bound�� �������� ũ�Ⱑ���� ���Ҹ� �����ϳ� ���ϳ��̴�.

	// lower_bound
	vector<int>v21 = { 1,3,5,7,9,11,13 };
	vector<int>::iterator itr8;
	itr8 = lower_bound(v21.begin(), v21.end(), 10); // lower_bound(iterator first, ierator second, value)  value���� "ũ�ų� ����"�͵��� ���� value�� ����� ���� �ݺ��ڷ� ���� (���Ѽ��ǹ�)
													// ���� ��簪�� value���� �۴ٸ� .end()�ݺ��ڸ� ����
	cout << *itr8 << endl;



	// upper_bound
	vector<int>v22 = { 1,3,5,7,9,11 };
	vector<int>::iterator itr9;
	itr9 = upper_bound(v22.begin(), v22.end(), 10); // upper_bound(iterator first, iterator second, value) value���� "ū" ���ҵ��� ���� ������ �ݺ����� ����
													// ���� ��簪�� value���� �۰ų� ���ٸ� .end()�ݺ��ڸ� ����
	cout << *itr9 << endl;



	// copy 
	vector<int>v23 = { 1,2,3,4,5 };
	vector<int>v23_copy;
	v23_copy.resize(6); // ���ϰ����� index 5 ��, end()�� �ݺ��ڸ� ���Ϲ޾ƾ� �ϹǷ� size�� 6���� resize
	vector<int>::iterator itr10;
	itr10 = copy(v23.begin(), v23.end(), v23_copy.begin()); // copy(iterator first, iterator second, ī���Ѱ��� ���� ���� ù �ݺ���) ** ���������� copy�� ����Ȱ� ���� ���� end()�� ����
															// �ϴµ�, �����ϴ°��� end()�κб��� ũ�Ⱑ Ȯ��Ǿ� ���� ������ ������ ���޾Ƽ� ��Ÿ�ӿ����� �߻��ϴ� ��������.
	cout << *itr10 << endl; // 0
	for (int i = 0; i < v23.size(); ++i) // 1 2 3 4 5
		cout << v23_copy[i] << endl;



	// copy_if
	vector<int>v24 = { 1,2,3,4,5 };
	vector<int>v24_copy;
	v24_copy.resize(6); // capacity�� 6���� ����� "��� 0���� �ʱ�ȭ"
	copy_if(v24.begin(), v24.end(), v24_copy.begin(), [](int i) {return i % 2; }); // copy_if(iterator first, iterator second, ī���Ѱ��� �������� ù�ݺ���, ����1��, ���ϰ��� bool�� �Լ�)
																				   // �Լ����� ���ϰ��� true�� �͵鸸 �����Ͽ� �����Ѵ�. �̰Ͷ��� ���������� ��������� ���� end() �ݺ��� ����
	for (auto &ele : v24_copy) // 1 3 5 0 0
		cout << ele << endl;



	// replace
	vector<int>v25 = { 1,2,3,4,5 };
	replace(v25.begin(), v25.end(), 3, 3333); // replace(iterator first, iterator second, �����Ұ�, �ٲ�Ե� ����)   

	for (auto &ele : v25) // 1 2 3333 4 5
		cout << ele << endl;



	// repalce_if
	vector<int>v26 = { 1,2,3,4,5 };
	replace_if(v26.begin(), v26.end(), [](int i) {return i % 2; }, 3333); // replace_if(iterator first, iterator second, ���ڸ�1���� ���ϰ��� bool�� �Լ�, �Լ��� true�Ұ�� �ٲ� ��)
																		  // �Լ��� true�� ��ȯ�ϴ� ���鸸 3333���� ����
	for (auto &ele : v26)
		cout << ele << endl;



	// generate
	vector < int>v27 = { 1,2,3,4,5 };
	generate(v27.begin(), v27.end(), g); // generate(iterator first, iterator second, ���ڰ������� ���ϰ��� �ִ� �Լ�)   ���������� �Լ��� ���ϰ��� vector�� ������ 

	for (auto &ele : v27)
		cout << ele << endl;



	// serach    �ð����⵵�� first_���� second_������ �Ÿ� S�� first���� second ������ �Ÿ� N�� ���� ����.  S*N
	// (1)
	vector<int>v28{ 1,2,4,1,2,3 };
	vector<int>v28_compare = { 1,2,3 };
	vector<int>::iterator itr11;
	itr11 = search(v28.begin(), v28.end(), v28_compare.begin(), v28_compare.end()); // search(iterator first, iterator second, iterator first_, iterator second_)
																					// first_���� second_������ �迭�� ���۵Ǵ� �ݺ��ڸ� �����Ѵ�. ���� ���ٸ� ������ end()�ݺ��ڸ� ����,
																					// �ƿ� ���Ϸ��� vector�� ������쿣 begin()�ݺ��ڸ� �����Ѵ�.
	cout << itr11 - v28.begin() << endl; // 3�� ��� ��, v28_compare�� ���ڿ��� ���۵Ǵ� ���� v28�� index 3���Ͷ�� �ǹ��̴�.

	// (2)
	vector<int>v29{ 1,2,5,8,10 };
	vector<int>v29_compare = { 4,6,8 };
	vector<int>::iterator itr12;
	itr12 = search(v29.begin(), v29.end(), v29_compare.begin(), v29_compare.end(), compare); // search(iterator first, iterator second, iterator first_, iterator second_, ���ڸ� �ΰ� ������ boolŸ���� �����ϴ� �Լ�)
																							 // �Լ����� true�� �����Ǵ� ���Ҹ�ŭ �������� ���ö��� ù �ݺ��ڸ� ������  ���� ���ٸ� end()����, �ƿ� ���ϴ°� ������� ��� begin()����

	cout << itr12 - v29.begin() << endl; // 2�� ���  ���ΰ��� �������� ������ �����ϴ� index�� 2��� �ǹ��̴�.

	// (3) searcher�� ���� search
	// search(v.begin, v.end(), v_compare.begin(), v_compare.end(), searcher)    <-- ���⼭ searcher�� ������ C++ǥ�ض��̺귯������ �����ϴ� ���� 
	//                                                                               default_searcher, boyer_moore_searcher, boyer_moore_horspool_searcher ���� �ִ�.



	// partial_sort    �ð����⵵�� first�� middle������ �Ÿ� M     O(MlogM)
	vector<int>v30{ 12,5,3,6,2 };
	partial_sort(v30.begin(), v30.begin() + 2, v30.end()); // partial_sort(iterator first, iterator middle, iterator second) first���� middle���� ������������ �����ϰ�
														   // �������� middle���� second���� �ִ´�. ��, �ڿ� middle���� second���� �ִ� ���ҵ��� ������ �ٲ� �� �ִ�.
	for (auto &ele : v30)
		cout << ele << endl; // 2 3 12 6 5



	// stable_sort    ������ ���ҵ��� ������������ ���� +  *** "��������"�� ������ ("���������� ���̰��� ���ҳ������� ������ �����ϴ°��� �ǹ�") ***
	vector<int>v31 = { 13,2,5,2,3,1 };
	stable_sort(v31.begin(), v31.end());

	for (auto &ele : v31)
		cout << ele << endl; // 1 2 2 3 5 13



	// binary_search     binary_search�� ����Ž���� �ƴ� ����Ž���� ����ϱ⶧���� [first,last) ������ ���ҵ��� �ּ��� "value�� �������� �κ�����"�� �Ǿ��־�� �Ѵ�.
	// ������ ������ N�̶�� �ִ� O(log N)
	vector<int>v32 = { 1,3,5,16,23,100,1234 }; // binary_search�� ����Ž���� �ϱ⿡ �������ϳ�, ������ �Ǿ��ִ� �͸� ����� �� �ִ�.
	bool check;
	check = binary_search(v32.begin(), v32.end(), 1234); // binary_search(iterator first, iterator second, value);   ã���� true, ��ã���� false�� ����

	return 0;
}