#include<stdio.h>
#include<conio.h>

float f(float x)
{
return (1/(1+(x*x)));
}

void main()
{
int n,i;
float a,b,h,s,r;
s=0;
clrscr();
printf("Enter value of a");
scanf("%f",&a);
printf("Enter value of b");
scanf("%f",&b);
printf("Enter value of n");
scanf("%d",&n);
h=(b-a)/n;
for(i=1;i<=n-1;i++)
{
if(i%2==0)
s=s+2*f(a+i*h);
else
s=s+4*f(a+i*h);
}
r=(h/3)*(f(a)+f(b)+s);
printf("%f",r);
getch();
}