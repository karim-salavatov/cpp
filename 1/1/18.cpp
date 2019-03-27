#include<iostream>
#include <math.h>
using namespace std;
int main()
{
	double a,b,c;
	int a1,b1,c1,r;
	cin >> a1 >> b1;
	c1=180-(a1+b1);
	cin >> r;
	a=2*r*sin(a1);
	b=2*r*sin(b1);
	c=2*r*sin(c1);
	cout << a <<  " " << a << " " << a << endl;
}
