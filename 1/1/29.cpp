#include <iostream>
using namespace std;
int main()
{
	setlocale(0LL,"rus");
	double x,y,res;
	cout << "Введите x:" << endl;
	cin >> x;
	cout << "Введите y:";
	cin  >> y;
	res=3*x*x*y*y-2*x*y*y-7*x*x*y-4*y*y+15*x*y+2*x*x-3*x+10*y+6;
	cout << "Ответ:" << res;
}
