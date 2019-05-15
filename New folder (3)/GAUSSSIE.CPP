#include<stdio.h>
#include<conio.h>

void main()
{
int n,i,j,k;
float a[10][10],x[10],s=0;
clrscr();
printf("Enter n");
scanf("%d",&n);
printf("Enter augmented");
for(i=1;i<=n;i++)
{
for(j=1;j<=n+1;j++)
scanf("%f",&a[i][j]);
}
for(i=1;i<=n;i++)
x[i]=0;
for(k=1;k<=15;k++)
{
for(i=1;i<=n;i++)
{
s=a[i][n+1];
for(j=1;j<=n;j++)
{
if(i!=j)
{
s=s-(a[i][j]*x[j]);
x[i]=s/a[i][i];
}
}
}
}
printf("Result");
for(i=1;i<=n;i++)
printf("%f",x[i]);
getch();
}