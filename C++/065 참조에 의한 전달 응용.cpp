#include<iostream>
#include<cmath>

using namespace std;

// C++�� �Լ����� ���ϰ��� �ϳ��ۿ� ���� �� ���µ� �Ű������� ������ ����Ͽ� �������� ���ϰ��� ���� �� �ֵ��� ���α׷��� �� �� �ִ�.
void getSinCos(const double &degree, double &sin_out, double &cos_out) // sin_out, cos_out�� ������ �Ǵ� ���̴�.
{
	static const double pi = 3.141592;
	const double radians = degree * pi / 180.0;

	sin_out = std::sin(radians);
	cos_out = std::cos(radians);
}

void foo(const int &x)		// �̷��� ���۷����� const�� �����ϸ� ���� ��ȭ���� ����. �׷��� ������, ���ͷ��̵� ���� �� ����.
{
	cout << x << endl;
}

int main()
{
	double sin = 0.0;
	double cos = 0.0;

	getSinCos(30.0, sin, cos);

	cout << sin << "    " << cos << endl;

	return 0;
}