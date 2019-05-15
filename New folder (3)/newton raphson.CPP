#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
return (x*x*x-2*x-11);
}

float fdx(float x)
{
return (3*x*x-2);
}

void main()
{
float x0,x1,eps;
eps=0.001;
clrscr();
printf("Enter x0");
scanf("%f",&x0);
step:
x1=x0-(f(x0)/fdx(x0));
if(abs(x1-x0)<eps)
printf("%f",x1);
else
{
x0=x1;
goto step;
}
getch();
}

