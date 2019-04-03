#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	if(a>=b && b>=c)
	{
	a=a*2;
	b=b*2;
	c=c*2;
	}
	else
   	{
   	a=fabs(a);
   	b=fabs(b);
   	c=fabs(c);
	}
	cout << a << " " << b << " " << c;
	return 0;
}
