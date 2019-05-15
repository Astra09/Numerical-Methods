#include<stdio.h>
#include<conio.h>

float f(float x,float y)
{
return x-y;
}

void main()
{int i;
float x,x0,y0,h,n,y;
clrscr();
printf("Enter values of x0");
scanf("%f",&x0);
printf("enter y0");
scanf("%f",&y0);
printf("ENter x");
scanf("%f",&x);
printf("Enter h");
scanf("%f",&h);
n=(x-x0)/h;
x=x0;
y=y0;
for(i=0;i<=n;i++)
{
y=y+h*f(x,y);
x=x+h;
}
printf("%f",y);
getch();
}