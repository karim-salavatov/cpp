#include <iostream>
using namespace std;
int main()
{
long long a,a2,a3,a4,a6,a5,a7,a8,a9,a10,a12,a13,a15,a21,a28,a16,a20,a24,a17,a18,a19;
cin >> a;
a2=a*a;
a3=a2*a;
a5=a3*a2;
a10=a5*a5;
     cout << "a^3 and a^10:"<< " " << a3 << " " << a10 << endl;
	
a2=a*a;
a4=a2*a2;
a8=a4*a4;
a16=a8*a8;
a20=a16*a4;
	  cout << "a^4 and a^20:"<< " " << a4 << " " << a20 << endl;
	
a2=a*a;
a3=a2*a;
a5=a3*a2;
a10=a5*a5;
a13=a10*a3;
   	  cout << "a^5 and a^13:" << a5 << " " << a13 << endl;
   	
a2=a*a;
a4=a2*a2;
a5=a3*a2;
a9=a5*a4;
a18=a9*a9;
a19=a18*a;
     cout << "a^5 and a^19:"<< " " << a5 << " " << a19 << endl;
   
a2=a*a;
a4=a2*a2;
a5=a3*a2;
a10=a5*a5;
a15=a10*a5;
a17=a15*a2;
       cout << "a^2 and a^5 and a^17:"<< " " << " " << a2 << " " << a5 << " "<< a17 << endl;

a2=a*a;
a4=a2*a2;
a8=a4*a4;
a24=a12*a12;
a28=a24*a4;
 cout << "a^4 and a^12 and a^28:"<< " " << a4 << " " << a12 << " "<< a28 << endl;

	return 0;
}
