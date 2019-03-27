// Входные данные	Выходные данные
//    5	      2.1650635094
//   1.7237891231	 0.74642258566
//  9223372036854773806 	3.9938372461e+18
#include <iostream>
#include <cmath>
#define sqr
using namespace std;
 
int main() {
	long double a, s;
	cin >> a;
	s = sqr(a) * 1.7320508075 / 4;
	cout.precision(11);
	cout << s << endl;
	return 0;
}
