#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(0LL,"rus");
	double l;
	cout << "������� ����� ��������:";
	cin >> l;
	const double g=9.8;
	const double pi=3.14;
	float T=2.0*pi*sqrt(l/g);
	cout << "������ ��������� =" << " " << T;
	return 0;
}
