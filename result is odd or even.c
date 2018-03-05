#include<stdio.h>
int main()
{
int n1,n2,sum;
printf("Enter the number1:");
scanf("%d",&n1);
printf("Enter the number2:");
scanf("%d",&n2);
sum=n1+n2;
if(sum%2==0)
printf("\n even");
}
else
{
printf("\n odd");
}
return 0;
}
