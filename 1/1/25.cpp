#include <iostream>
#include <math.h>
using namespace std;
 int main()
{  int x1,x2,x3,y1,y2,y3;
   float s,p,pp,a,b,c;
  cout<<"x1="; cin>>x1;
  cout<<"y1="; cin>>y1;
  cout<<"x2="; cin>>x2;
  cout<<"y2="; cin>>y2;
  cout<<"x3="; cin>>x3;
  cout<<"y3="; cin>>y3;
 a = sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2))); cout<<" a=" <<a<<endl ;
 b = sqrt(((x1-x3)*(x1-x3))+((y1-y3)*(y1-y3))); cout<<" b=" <<b<<endl ;
 c = sqrt(((x2-x3)*(x2-x3))+((y2-y3)*(y2-y3))); cout<<" c=" <<c<<endl ;
 p = a+b+c;
 cout<<"p=" <<p<<endl;
  pp=p/2;
 s=sqrt(pp*(pp-a)*(pp- b )*(pp-c)); 
 cout<<"s=" <<s<<endl;
}

