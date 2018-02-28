#include<stdio.h>
int main()
{
int n1,n2,diff;
printf("enter the number1:");
scanf("%d",&n1);
printf("enter the number2:");
scanf("%d",&n2);
diff=n1-n2;
if(diff%2==0)
{
printf("\n even");
}
else
{
printf("\n odd");
}
return 0;
}
