#include<stdio.h>
int main()
{
int n,m,sum;
printf("\n enter the num1:");
scanf("%d",&n);
printf("\n enter the num2:");
scanf("%d",&m);
sum=n*m;
if(sum%2==0)
{
printf("\n even");
}
else
{
printf("\n odd");
}
return 0;
}
