#include<stdio.h>
int main();
{
int num;
printf("Enter the number:");
scanf("%d",&num);
num+=1;
while(num%10!=0)
{
num=num+1;
}
printf("\n %d",num);
return 0;
}
