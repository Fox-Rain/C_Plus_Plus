#include<iostream>

using namespace std;

#define NUM_STUDENT 10			// #define�� ���� �����ϸ�, �迭�� ũ�⿡ ���� ������ �� �ִ�.

void doSomething(int student_score[])		// *** �迭�� �Ķ���ͷ� ���������� �����ͷ� �޴´�.
{
	cout << student_score << endl;			// 00CFF7A8		�迭�� ù�ּҰ� ��µ�		��, �����ͺ��� �̱⿡ �����ȿ� ���ִ� ���� student_score �� ��µǴ� ����.
	cout << &student_score << endl;			// 00CFF6D4		*** �����ͺ����� �ּҰ� ��µ�

	for (int i = 0; i < 10; ++i)
		cout << student_score[i] << "  ";

	cout << endl;

	cout << sizeof(student_score) << endl;	// 4	(������ ������ ũ��)		�Ķ���� student_score�� ������ �����̴�.
}

int main()
{
	int student_score[NUM_STUDENT] = { 1,2,3,4,5,6,7,8,9,10 };

	cout << &student_score << endl;			// �迭�� �ּ�	00CFF7A8

	cout << sizeof(student_score) << endl;  // 4x10    40

	doSomething(student_score);				// doSomething() ()�ȿ� �Ķ���ͷδ� �迭�� �������� ���� �ƴ϶� , �迭�� �ּڰ��� ������ ������ �־ ������.
											// ���� �Լ��ȿ��� ���� ��ȭ��Ų�ٸ�, �� �迭�� ������ ��ġ�� �ȴ�.
	return 0;
}