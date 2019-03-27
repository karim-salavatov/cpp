#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a,b,c,s1,s2;
	cout << "Vvedite a:";
	cin >> a;
	cout << "Vvedite b:";
	cin >> b;
	s1=(fabs(a)+fabs(b))/2;
	s2=sqrt(fabs(a)*fabs(b));
	cout << s1 << " " << s2 << endl;
}
