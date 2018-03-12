#include<stdio.h>
int main()
{
int n,remainder,product=1;
scanf("%d",&n);
while(n!=0)
{
remainder=n%10;
product=product*remainder;
n=n%10;
}
printf("\n %d",product);
return 0;
}
