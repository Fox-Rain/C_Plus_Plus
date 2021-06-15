// 재귀적 함수 호출    재귀는 퍼포먼스를 중요시할때에는 사용하지 않는것이 좋다. (퍼포먼스가 매우 떨어짐)
#include<iostream>

using namespace std;

void countDown(int count) // count 부터 하나씩 줄어드는 수를 출력하는 함수
{
	cout << count << endl;
	if (count > 0)
		countDown(count - 1);   // "재귀적 함수 호출"    함수안에서 자기자신을 호출함  <재귀적 함수를 호출할시 끝나는 조건을 꼭 설정해 주어야한다. 안그럴시 무한루프>
}

int sumTo(int num) // num까지 순차적으로 자연수를 더하는 함수
{
	if (num <= 0) return 0;
	else if (num <= 1) return 1;
	else return sumTo(num - 1) + num;
}

int main()
{
	countDown(10);
	cout << sumTo(12) << endl;

	return 0;
}