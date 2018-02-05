#include<stdio.h>
int main()
{
int a,n;
printf("Enter the number:");
scanf("%d",&a);
n=2^a;
if(n==0)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
