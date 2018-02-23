#include<stdio.h>
int main()
{
int  n,r,l,i;
scanf("%d",&n)
scanf("%d%d",&l,&r);
for(i=1;i<r;i++)
{
if(n>=1&&n<=r)
{
printf("yes %d is between %a and %d",n,l,r);
break;
}
}
if(!(n>=1&&n<=r))
{
printf("if it is not");
}
return 0;
}
