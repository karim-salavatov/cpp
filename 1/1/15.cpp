#include <iostream>
#include <math.h>
using namespace std;
int main() 
{
setlocale(LC_ALL, "Russian");
float gip, katet1,katet2,radius;
cout << "������� ����� ����������: ";
cin >> gip;
cout << " ������� �����  ������ : ";
cin >> katet1;
katet2 = sqrt((float(gip*gip - katet1 * katet1)));
radius = (katet1 + katet2 - gip) / 2;
cout << "�����2: " << katet2 << " ������ : " << radius << endl;
return 0;
}
