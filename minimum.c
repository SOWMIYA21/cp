#include<stdio.h>
int main()
{
int array,minimum,size,i,location=1;
printf("Enter the number of elements in array\n");
scanf("%d",&size);
printf("enter %d integer\n",size);
for(i=0;i<size;i++)
scanf("%d",&array[n]);
minimum=array[0];
for(i=1;i<size;i++)
{
if(array[i]<minimum)
{
minimum=array[i];
location=i+1;
}
}
printf("minimum element is present at location%d and it's value is%d\n",location,minimum);
return 0;
}
