#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double x,y;
	cin >> x >> y;
	double s=fabs(x)-fabs(y);
	double s1=1+fabs(x*y);
	double result = s / s1;
	cout << result << endl;
}
