#include <iostream>
#include <cmath>
using namespace std;
#define PI 3.14
int main() 
{
   double a, b, alpha, h=0;
   cin >> a >> b >> alpha;
   h = ((a-b) / 2 ) * tan(alpha);
   cout << h * ( (a+b) / 2);
   return 0;
  }
