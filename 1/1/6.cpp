#include <iostream>
#include <math.h>
 
using namespace std;
 
main()
{
	setlocale(0LL,"rus");
    int a,b,c,S;
    cout<<"������� ����� 1-�� ������: ";
    cin>>a;
    cout<<"������� ����� 2-�� ������: ";
    cin>>b;
    c=sqrt(a*a+b*b);
    S=a*b/2;
    cout<<"����������: "<< c << ",������� : "<< S;
    return 0;
}
