#include<stdio.h>
#include<conio.h>

void main()
{
int n,i,j;
float x[10],y[10],m,a,b,sum;
sum=0;
clrscr();
printf("enter value n");
scanf("%d",&n);
printf("enter value x");
for(i=0;i<=n;i++)
scanf("%f",&x[i]);
printf("enter value y");
for(i=0;i<=n;i++)
scanf("%f",&y[i]);
printf("interpolating point");
scanf("%f",&m);
for(i=0;i<=n;i++)
{
a=1;
b=1;
for(j=0;j<=n;j++)
{
if(i!=j)
{
a=a*(m-x[j]);
b=b*(x[i]-x[j]);
}
}
sum=sum+((a/b)*y[i]);
}
printf("%f",sum);
getch();
}