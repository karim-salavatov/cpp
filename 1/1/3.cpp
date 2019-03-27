#include <iostream>
using namespace std;
int main()
{
	setlocale(0LL,"rus");
	int a,s,v;
	cout << "Введите длину ребра куба:";
	cin >> a;
	s=a*a*a;
	v=6*a*a;
	cout << "Площадь =" << " " << s << endl;
	cout << "Объем =" << " " << v;
}
