#include<iostream>

using namespace std;

int main()
{
	/* int num_student;
	cin >> num_student;
	int student_score[num_student];  << 불가능  num_student가 cin에 의해 런타임에 결정되기에 사이즈가 결정된 배열에는 쓸 수 없다.	*/

	/* int num_student=20;
	int student_score[num_student];    <<< 불가능 */
	// 배열크기를 변수로 선언하고 집어넣기 위해서는 #define 하여 고정하거나, const 사용하여 고정하여야 한다.

	const int num_student = 20;
	int student_score[num_student];		// const로 고정하였으므로 []안에 넣을 수 있다.
	return 0;
}