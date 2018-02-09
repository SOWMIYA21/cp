#include<stdio.h>
include<conio.h>
void main()
{
int fact=1,n;
printf("enter the number");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
fact=fact*i;
}
printf("the factorial of the given number%d",&fact);
getch();
}
