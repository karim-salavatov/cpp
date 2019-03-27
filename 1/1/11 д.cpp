#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{
float x,y,z,a,b;
printf("Vvedite x,y,z= ");
scanf("%f%f%f",&x,&y,&z);
a=(1+y)*((x+(y/(x*x+4)))/(exp(-x-2)+(1/(x*x+4))));
b=(1+cos(y-2))/((pow(x,4)/2)+pow(sin(z),2));
printf("a=%f b=%f",a,b);
getch();
};

