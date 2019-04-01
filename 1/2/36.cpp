#include <stdio.h>
#include <iostream> 
int main()
{
	setlocale(0LL,"rus");
    double a, b, c;
 std::cin >> a >> b >> c;
  if(a<b&&b<c)
  {
  std::cout << "Выполняется" ;
  }else
  {
  	std::cout << "Не выполняется";
  }
}
