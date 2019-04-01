#include <iostream>
using namespace std;
int main()
{
	int x,y,max,min;
	cin >> x >> y;
	if(x<y)
	{
		min=x;
		max=y;
	}else
	{
		min=y;
		max=x;
	}
	cout << max << " " << min;
}
