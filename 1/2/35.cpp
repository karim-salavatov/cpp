#include <iostream>
 
int  main()
{
    double x, y, z, a, b;
    std::cout << "Enter X :" ;
    std::cin >> x;
    std::cout << "Enter Y :" ;
    std::cin >> y;
    std::cout << "Enter Z :" ;
    std::cin >> z;
     a = x + y ; b = x * y * z; 
    if (a > b)
        std::cout << "Summa bolshe\n" << a << endl;;
    else if (a < b)
        std::cout << "Proizved bolshe\n" << b << endl;;
    else if (z > a && b)
        std::cout << "Max = z\n"<< z;;
    system("pause");
}

