#include<iostream>

using namespace std;

int main()
{
	/* int num_student;
	cin >> num_student;
	int student_score[num_student];  << �Ұ���  num_student�� cin�� ���� ��Ÿ�ӿ� �����Ǳ⿡ ����� ������ �迭���� �� �� ����.	*/

	/* int num_student=20;
	int student_score[num_student];    <<< �Ұ��� */
	// �迭ũ�⸦ ������ �����ϰ� ����ֱ� ���ؼ��� #define �Ͽ� �����ϰų�, const ����Ͽ� �����Ͽ��� �Ѵ�.

	const int num_student = 20;
	int student_score[num_student];		// const�� �����Ͽ����Ƿ� []�ȿ� ���� �� �ִ�.
	return 0;
}