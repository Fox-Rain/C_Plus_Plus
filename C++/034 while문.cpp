#include<iostream>

using namespace std;

int main()
{
	int out_count = 1;

	while (out_count <= 5)
	{
		int in_count = 1;

		while (in_count <= out_count)
		{
			cout << in_count++;
		}
		cout << endl;

		++out_count;
	}


	// while문에서의 주의사항

	unsigned int count = 10;	// unsigned int 로  반복문에서 count요소로 사용시 오버플로우를 조심해야 한다.	( 0이 될때 주의 Overflow )

	while (count >= 0)
	{
		if (count == 0) cout << "zero";
		else cout << count << " ";

		count--;	// 만약 이때 count가 0일 경우, count--  -1이 되는것이 아니라 unsigned 라서 오버플로우가 발생해 매우 큰양수로 바뀌게된다. 그결과 무한루프가 될 수 있으므로
	}				// 주의해야 한다.



	// do while문		*** 먼저 1번 실행한다는 것이 특징이다. ***
	// do while문은 먼저 do를 실행하고, 이후 while의 조건을 보고 다시 코드를 실행할지 결정한다.
	int selection;

	do
	{
		cout << "HaHa" << endl;
		cin >> selection;
	} while (selection <= 0 || selection >= 5);

	return 0;
}