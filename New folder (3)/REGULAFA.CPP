#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
return (x*x*x-5*x+1);
}

void main()
{
float a,b,x,eps;
eps=0.001;
clrscr();
printf("Enter value of a");
scanf("%f",&a);
printf("Enter value of b");
scanf("%f",&b);
step:
x=b-(((b-a)/(f(b)-f(a)))*f(b));
if(f(b)*f(x)<0)
b=x;
else
a=x;
if(abs(b-a)<eps)
printf("%f",x);
else
goto step;
getch();
}