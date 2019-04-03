#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Russian");
	double a,b,c;
	cin >> a >> b >> c;
	if(a>1 && a<3) cout << a << endl; 
	if(b>1 && b<3) cout << b << endl; 
	if(c>1 && c<3) cout << c << endl;
	else cout << "Эти числа не принадлежат заданному интервалу" << endl;
		 
	return 0;
}
