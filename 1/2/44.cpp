#include <iostream>
using namespace std;
int main()
{
    double x, y, z,s;
        cout << "x, y, z=";
        cin >> x >> y >> z; 
        
 
        if ((x + y + z) > 1.0)
        {
            cout << "S<1  ";
            if (x < y)
            {
                x = (y + z) / 2;
            }
            else
            {
                y = (x + z) / 2;
            }
        }
        
        if ((x + y + z) < 1.0)
        {
            cout << "S<1  ";
            if ((x < y) && (x < z))
            {
                x = (y + z) / 2;
            }
            else
            {
                if (y < z)
                {
                    y = (x + z) / 2;
                }
                else
                    z = (x + y) / 2;
            }
        }
        cout << "x=" << x << "\n y=" << y << "\n z=" << z << "\n";
        
    return 0;
}
