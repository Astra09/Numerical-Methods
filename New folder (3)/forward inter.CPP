#include<stdio.h>
#include<conio.h>

void main()
{
int n,i,j;
float x[10],y[10], f[10][10],m,h,u,s,p;
s=0;
p=1;
clrscr();
printf("Enter value of n");
scanf("%d",&n);
printf("Enter value of x");
for(i=0;i<=n;i++)
{
scanf("%f",&x[i]);
}
printf("Enter value of y");
for(i=0;i<=n;i++)
{
scanf("%f",&y[i]);
}
printf("Enter interpolating");
scanf("%f",&m);
h=x[1]-x[0];
u=(m-x[0])/h;
s=y[0];
for(j=0;j<n;j++)
f[0][j]=y[j];
for(i=1;i<n;i++)
{
for(j=0;j<n-i;j++)
f[i][j]=f[i-1][j+1]-f[i-1][j];
}
for(i=1;i<n;i++)
{
p=p*(u-i+1)/i;
s=s+p*f[i][0];
}
printf("%f",s);
getch();
}


