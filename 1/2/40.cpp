#include <iostream>
using namespace std;
int main()
{
	int i,s;
	cin >> i >> s;
	if(i<=s) i=0;
	else i=i;
	cout << i << " "<< s;
	return 0;
}
