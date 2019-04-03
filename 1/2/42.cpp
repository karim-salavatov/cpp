#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <math.h>
 
using namespace std;
 int  main()
 {
  double a,b,max,min;
  cin >> a >> b;
  if(a<b)
  {
  	min=a;
  	max=b;
  	a=(min+max)/2;
  	b=2*(min*max);
  }
  else
  {
  	min=b;
  	max=a;
  	b=(min+max)/2;
  	a=min*max;
  }
  cout << a << " " << b;
 }
