#include <iostream>
using namespace std;
int main()
{
	int x,y;
	cin >> x >> y;
	if(x>y) cout << x-y;
	else cout << y-x+1;
	return 0;
	
}
