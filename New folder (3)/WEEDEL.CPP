#include<stdio.h>
#include<conio.h>

float f(float x)
{
return (1/(1+(x*x)));
}

void main()
{
int i,n;
float y[10],s1=0,s2=0,s3=0,s4=0,a,b,h,s,x;
printf("Enter n");
scanf("%d",&n);
printf("enter a");
scanf("%f",&a);
printf("Enter b");
scanf("%f",&b);
h=(b-a)/n;
x=a;
for(i=0;i<=n;i++)
{
y[i]=f(x);
x=x+h;
}
for(i=0;i<=n-6;i=i+6)
{
s1=s1+y[i+2]+y[i+4];
s2=s2+y[i+1]+y[i+5];
s3=s3+y[i+3];
}
for(i=0;i<=n-12;i=i+6)
s4=s4+y[i+6];
s=(3*h/10)*(y[0]+y[n]+s1+5*s2+6*s3+2*s4);
printf("%f",s);
getch();
}
