#include<stdio.h>
int main()
{
int a[25],,n,i;
float median=0,sum=0;
printf("Enter the number of terms:");
scanf("%d",&n);
printf("\n Enter the number:\n");
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=n;i++)
{
for(i=1;i<=n;i++)
{
sum=sum+a[i];
avg=sum/n;
}
print("\n the median numbersare:%f",median);
return 0;
}
