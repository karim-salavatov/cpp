#include <iostream>
using namespace std;
int main()
{
	int v,v1,v2,t1,t2,t;
	cin >> v1 >> t1 >> v2 >> t2;
	v=v1+v2; 
	t=(t1*v1+t2*v2)/v;
	cout << v << " " << t;
}
