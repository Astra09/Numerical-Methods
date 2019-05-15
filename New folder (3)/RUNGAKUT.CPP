#include<stdio.h>
#include<conio.h>
float f(float x,float y)
{
return (x*x+y*y);
}
void main()
{
int i;
float x0,y0,n,x,y,k1,h,k2,k;
clrscr();
printf("Enter x0");
scanf("%f",&x0);
printf("Enter y0");
scanf("%f",&y0);
printf("Enter x");
scanf("%f",&x);
printf("Enter h");
scanf("%f",&h);
n=(x-x0)/h;
x=x0;
y=y0;
for(i=0;i<=n;i++)
{
k1=h*f(x,y);
k2=h*f(x+h,y+k1);
k=(k1+k2)/2;
x=x+h,y=y+k;
}
printf("%f",y);
getch();
}