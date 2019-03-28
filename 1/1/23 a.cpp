#include <iostream>
#include <cmath>
 using namespace std; 
int main()
{
    cout << "Enter a:\n";
    double  a;
    cin >> a;
 
    cout << "Enter b:\n";
    double  b;
    cin >> b;
 
    cout << "Enter c:\n";
    double  c;
    cin >> c;
 
    double  ma = sqrt(2 * b * b + 2 * c * c - a * a) / 2;
    double  mb = sqrt(2 * a * a + 2 * c * c - b * b) / 2;
    double  mc = sqrt(2 * a * a + 2 * b * b - c * c) / 2;
 
    cout << ma << "\t" << mb << "\t" << mc << "\n";
 
    return 0;
}
