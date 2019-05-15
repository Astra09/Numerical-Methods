#include<stdio.h>
#include<conio.h>

void main()
{
int n,i,j;
float x[10],y[10],f[10][10],m,u,s,h,p;
s=0;
p=1;
clrscr();
printf("Enter value of n");
scanf("%d",&n);
printf("Enter value of x");
for(i=0;i<=n;i++)
scanf("%f",&x[i]);
printf("Enter value of y");
for(i=0;i<=n;i++)
scanf("%f",&y[i]);
printf("Interpolating");
scanf("%f",&m);
h=x[1]-x[0];
u=(m-x[n])/h;
s=y[n];
for(j=0;j<=n;j++)
f[0][j]=y[j];
for(i=1;i<=n;i++)
{
for(j=0;j<=n-i;j++)
f[i][j]=f[i-1][j]-f[i-1][j-1];
}
for(i=0;i<=n;i++)
{
p=p*(u+i-1)/i;
s=s+p*f[i][n];
}
printf("%f",s);
getch();
}
