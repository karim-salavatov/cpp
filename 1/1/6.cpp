#include <iostream>
#include <math.h>
 
using namespace std;
 
main()
{
	setlocale(0LL,"rus");
    int a,b,c,S;
    cout<<"¬ведите длигу 1-го катета: ";
    cin>>a;
    cout<<"¬ведите длину 2-го катета: ";
    cin>>b;
    c=sqrt(a*a+b*b);
    S=a*b/2;
    cout<<"√ипотенуза: "<< c << ",ѕлощадь : "<< S;
    return 0;
}
