#include<stdio.h>
#include<conio.h>
#include<math.h>

float f(float x)
{
return (x*x*x-2*x-11);
}

void main()
{
float x0,x1,x2,eps;
eps=0.001;
clrscr();
printf("Enter value of x0");
scanf("%f",&x0);
printf("Enter value of x1");
scanf("%f",&x1);
step:
x2=(x0+x1)/2;
if(f(x2)*f(x0)<0)
x1=x2;
else
x0=x2;
if(abs(x1-x0)<eps)
printf("%f",x2);
else
goto step;
getch();
}