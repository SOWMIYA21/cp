#include<stdio.h>
int main()
{
int num1=5,num2=5,product,i,flag=0;
printf("the two number :");
scanf("%d",&num1,&num2);
product=num1*num2;
for(i=1;i<product/2;i++)
{
if(i*i==product)
{
flag=1;
break;
}
}
if(flag==1)
{
printf("\n yes");
}
else
{
printf("\n no");
}
return 0;
}
