#include <iostream>
using namespace std;
int main()
{
	long long a,a2,a4,a6,a7,a8,a9,a10,a13,a15,a21,a28,a64;
	cin >> a;
	a2=a*a;
	a4=a2*a2;
    a6=a4*a2;
    a7=a6*a;
    a8=a4*a4;
    a9=a8*a;
    a10=a6*a4;
    a13=a9*a4;
    a15=a9*a6;
    a21=a15*a6;
    a28=a15*a13;
    cout << "a^2:" << a2 << endl;
    cout << "a^4:" << a4 << endl;
    cout << "a^6:" << a6 << endl;
    cout << "a^7:" << a7 << endl;
    cout << "a^8:" << a8 << endl;
    cout << "a^9:" << a9 << endl;
    cout << "a^10:" << a10 << endl;
    cout << "a^13:" << a13 << endl;
    cout << "a^15:" << a15 << endl;
    cout << "a^21:" << a21 << endl;
    cout << "a^28:" << a28 << endl;
	return 0;
}
