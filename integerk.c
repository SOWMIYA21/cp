#include<stdio.h>
int main()
{
int i=1,sum=0,k;
printf("enter the number \n");
scanf("%d",&k);
do
{
sum=sum+i;
i=i+1;
}
while(i<=k);
printf("the sum of first number is %d",k,sum);
return 0;
}
