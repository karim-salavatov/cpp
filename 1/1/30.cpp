#include <iostream>
using namespace std;
int main()
{
	setlocale(0LL,"rus");
	double x,res,res1;
	cout << "Введите x:";
	cin >> x;
	res= 1+x*(-2+x*(3-4*x));
	res1=1-x*(-2+x*(3+4*x));
	cout << "Ответ:" << res << " " << res1;
	return 0;
}
