#include<stdio.h>
int main()
{
int a[10],i,largest;
printf("Enter the ten numbers:");
for(i=0;i<10;i++)
scanf("%d",&a[i]);
largest=a[0];
{
for(i=0;i<10;i++)
if(a[i]>largest)
{
largest=a[i];
}
}
printf("largest of ten numbers%d",largest)
return 0;
}
