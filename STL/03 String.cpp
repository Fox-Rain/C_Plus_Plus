// String //
#include<iostream>
#include<string>

using namespace std;

int main()
{
	// erase
	// *** erase�� �ݺ��ڸ� ��������ʴ°�� ������ ���� ���ڿ��� �����ϰ�, �ݺ��ڸ� ����� ��� ���������� ������ ���ڴ����� ����Ű�� �ݺ��ڸ� �����Ѵ�. 
	// (1) erase�� �����ϸ� ������ ����� ä�������� ������ �������������, �� ��ü�� �޸� capacity�� ��ȭ���� �ʴ´�.
	string str1 = "This is an example";
	cout << str1.length() << " " << str1.capacity() << endl; // 18 31

	string return_str;
	return_str = str1.erase(5, 2); // .erase(index, count)   �����ϱ� ������ index, count�� �ű⼭���� ���� ������ �ִ´�.

	cout << str1.length() << " " << str1.capacity() << endl; // 16 31
	cout << return_str << endl; // This  an example
	cout << str1 << endl; // This  an example ���


	// (2) erase�� �����ϸ� ������ ����� ä�������� ������ �������������, �� ��ü�� �޸� capacity�� ��ȭ���� �ʴ´�.
	string str2 = "sexy";
	cout << str2.length() << " " << str2.capacity() << endl; // 4 15

	str2.erase(3); // .erase(index)  index�� ���� �ϳ� �����.
	cout << str2.length() << " " << str2.capacity() << endl; // 3 15
	cout << str2 << endl; // sex

	// (3)
	string str3 = "hello world";
	string::iterator itr1;

	itr1 = str3.erase(str3.begin(), str3.begin() + 6); // .erase(iterator first, iterator second) first���� second �������� ���ڵ��� �����.
	cout << itr1 - str3.begin() << endl;
	cout << str3 << endl; // world



	// find  ***  ã�� ���ҽ�   ->   -1�� ���� 
	// (1)
	string str4 = "coding everyone";
	string str4_compare = "everyone";

	int index4;
	index4 = str4.find(str4_compare, 4); // .find(ã�� string, ã�⸦ ������ index)    find�Լ����� ã�ԵǸ� ã�� ���ڿ��� ù��° index�� �����Ѵ�.

	cout << index4 << endl; // 7

	// (2)
	string str5 = "kakaotalk";
	char ch = 't';

	int index5;
	index5 = str5.find(ch, 0); // .find(ã������, ã�⸦ ������ index)  ã�ԵǸ� �� ������ ù��° index�� �����Ѵ�.

	cout << index5 << endl;



	// find_first_of
	// (1)
	string str6 = "hello";
	string str6_compare = "eol";

	int index6;
	index6 = str6.find_first_of(str6_compare, 0); // .find_first_of(������ string, ã������� index) ������ string�� ���ڵ��� �����ڿ����� ��ó������ ������ ���� index�� ����

	cout << index6 << endl; // e,o,l�߿��� e�� ��ó������ �´� ���ڹǷ� index 1�� ��µ�  1

	// (2)
	string str7 = "kakao";
	const char *str7_compare = "abc";

	int index7;
	index7 = str7.find_first_of(str7_compare, 0, 4); // .find_first_of(������ ���ڿ�/���� ������, ã�⸦ ������ index, ����) [index, index+����) �ȿ��� ù��°�� ��Ÿ���� ���ڸ� ã�� index�� ����

	cout << index7 << endl; // a�� index=1�̹Ƿ� 1���

	// (3)
	string str8 = "I love you";
	char c = 'l';

	int index8;
	index8 = str8.find_first_of(c, 2); // .find_first_of(ã�� ����, ã������� index);

	cout << index8 << endl; // 2 



	// getline
	// getline�Լ��� �Է½�Ʈ������ ���ڸ� �дµ� "delim���ڸ� �аԵǸ� �ش� delim���ڴ� ������", �о���̱⸦ �����ѵ�, ���ڷ� ���� ���ڿ��� �����մϴ�.  (delim�� ������������, '\n'�� default)
	// ���� ������ε� �б������ �߻��Ѵٸ� failbit�� �����Ͽ��� ������ �߻���Ų��. ���� �Է½�Ʈ������ �дٰ� End-of-File�� �����ϸ� eofbit�� �����Ͽ� �б⸦ �����մϴ�.
	// ����� �Է¹޴� ���ڴ� push_back�Լ��� ���� ���ٿ����Ƿ�, reserve�� ���� ������� ũ�⸦ �ȴٸ� �Ҵ��صδ� ���� �����ս� �鿡�� �����ϴ�.
	// *** �������� getline�� default delim�� '\n'�̹Ƿ� ���鹮�ڸ� ��Ʈ���� ����� �Է¹�ĵڿ� �ٷ� getline�� ���ԵǸ� ���鹮�ڸ� �а� �ٷ� �����ϰ� �Ǿ� ������ �ʰ� ���α׷��� �۵��� �� �ֽ��ϴ�.
	// *** �̿� ���� ��Ȳ�� ���� ���ؼ� ��Ʈ���� ���� ���鹮�ڸ� �������ϴµ� �Ʒ��� ������ ���Ͽ� ���� �� �ֽ��ϴ�.
	// *** cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n')

	string str9;  // hello world�� �Է��ҽ� //  
	getline(std::cin, str9, ' '); // hello world�� �Է��ϸ�, delim�� ' '�̹Ƿ� hello ���� �а� ' '�� �����Եȴ�.  ��, �Է½�Ʈ������ world�� ���Ե�.
	cout << str9 << endl; // �о�� hello�� ���

	getline(cin, str9); // world�����������Ƿ� world���� �޾ƿµ�, '\n'�� ������
	cout << str9 << endl; // world ���

	getline(cin, str9); // ������ hello world ��� �Է½�Ʈ������ �о�鿩�����Ƿ�, �Է½�Ʈ���� ����ֱ⿡ �ٽ� �Է��� �޴´�.
	cout << str9 << endl;



	// insert
	string str10 = "hello coding";
	str10.insert(5, 3, 'x'); // .insert(������ index, �����Ұ���, ����) index�� ���ڸ� ������ŭ ����
	cout << str10 << endl; // helloxxx coding 

	string str11 = "hello coding";
	str11.insert(5, "hello"); // .insert(������ index, ������ ���ڿ�(ptr�� ����))
	cout << str11 << endl; // hellohello coding

	string str12 = "hello coding";
	str12.insert(5, "hello", 3); // .insert(������ index, ������ ���ڿ�(ptr�� ����), ���ڿ����� ������ ����)
	cout << str12 << endl; // ���⼭ hellohel coding   3���Ƿ� hel�� ����



	// replace
	string str13 = "everyone coding";
	str13.replace(0, 3, "hill"); // .replace(�ٲٱ� ������ index, �ٲ� ����, ������ str)
	cout << str13 << endl; // hillryone coding

	string str14 = "everyone coding";
	str14.replace(str14.begin(), str14.end(), "hi"); // replace(iterator first, iterator second, ������str)    first���� second�������� ���ڿ��� str�� ����
	cout << str14 << endl; // hi

	string str15 = "hi hello";
	str15.replace(0, 3, "hill", 0, 3); // replace(���Խ���index, �ٲ𰹼�, ���ڿ�str, ���Ե� ���ڿ��� ���� index, ���ڿ� ����)
	cout << str15 << endl; // hilhello // �ε����� ���������� ierator�� �ٲپ �ڵ��� ���� �ִ�.



	// substr
	string str16 = "belong";
	string str16_substr;
	str16_substr = str16.substr(0, 2); // .substr(�������index, ����) + �����Ͽ� ����     �� ���⼱ be�� �����Ͽ� ������.
	cout << str16_substr << endl; // be



	// append
	// (1)
	string str17 = "kakao talk";
	str17.append(5, 'k'); // .append(����, �ڿ��߰��� ����)   k�� 5�� �ڿ� �߰�
	cout << str17 << endl; // kakao talkkkkkk

	// (2)
	string str18 = "maple";
	str18.append("story"); // .append(���ڿ�)   �ڿ� ���ڿ��� �߰�
	cout << str18 << endl; // maplestory

	// (3)
	string str19 = "hahaha";
	str19.append("kakao", 1, 3); // .append(�κ������� ���ڿ�, ���Ϲ��ڿ��� ����index, ����index���� ����)  ��, ���⼱ kako���� aka�� �ڿ� �ٿ��� hahahaako
	cout << str19 << endl; // hahahaaka

	// (4)
	string str20 = "bitcoin";
	const char *ch_20 = "hello"; // ���ڿ� ������
	str20.append(ch_20, 4); // .append(���ڿ� ������, ó������ ��� ���ڸ� �ڿ� ���ϰ��ΰ��� ����)   ���⼱ 4�Ƿ� hell�� �ڿ� ���̰� �ȴ�.
	cout << str20 << endl; // bitcoinhell

	// (5)
	string str21 = "dogecoin";
	string str21_ = "ELM";
	str21.append(str21_.begin(), str21_.begin() + 2); // .append(iterator first, iterator second) first���� second�������� str21_�� ���ڸ� �ڿ� ����
	cout << str21 << endl;

	return 0;
}