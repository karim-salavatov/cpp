#include <iostream>
using namespace std;
int main()
{
	double s,a,b,c;
	cin >> a >> b >> c;
	s=a+b+c;
	a=a/s*180;
    b=b/s*180;
    c=c/s*180;
    cout << a << " " << b << " " << c;
    return 0;
}
