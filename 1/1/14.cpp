#include <iostream>
 #include <math.h>
 using namespace std;
int main( )
{
        double m1,m2,r,F;
        double const G=6.7365*pow(10,-11);         
        cout <<"Vvedite massy tel";
        cin >> m1>>m2;
        cout <<"Vvedite rassto9nie mezhdy telami";
        cin >>r;
        F=G*m1*m2/(r*r);
        cout <<"F= " <<F <<endl;
        return 0;
}
