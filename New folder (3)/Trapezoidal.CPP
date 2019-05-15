#include<stdio.h>
#include<conio.h>
float f(float x)
{ float y;
y=(1/(1+(x*x)));
return y;
}

void main()
{
int n,i;
float a,b,h,s,r;
s=0;
clrscr();
printf("Enter n");
scanf("%d",&n);
printf("Enter a ");
scanf("%f",&a);
printf("Enter b");
scanf("%f",&b);
h=(b-a)/n;
for(i=1;i<=n-1;i++)
{
s=s+f(a+(i*h));
}
r=(h/2)*(f(a)+f(b)+2*s);
printf("%f",r);
getch();
}