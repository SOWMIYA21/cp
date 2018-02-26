#include<stdio.h>
int main()
{
int n,i,a,b,c;
printf("Enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
a=pow(2,i);
if(a>n)
{
b=i;
break;
}
}
c=power(2,b);
printf("\n%d",c);
return 0;
}
