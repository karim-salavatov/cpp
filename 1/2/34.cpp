#include <iostream>
using namespace std; 

int main(int argc, char **argv) 
{ 
    int x,y,z; 
    cout << "Vvod x, y, z: ";   cin >> x >> y >> z; 
    int max = x; 
    if (y > max) 
        max = y; 
    if (z > max) 
        max = z; 
    int min = x; 
    if (y < min) 
        min = y; 
    if (z < min) 
        min = z; 
    cout << "Max = " << " " << max << ", Min = " << " " << min;   
	 return 0; 
} 

