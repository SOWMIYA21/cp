#include<stdio.h>
#define MAX_SIZE100
int main()
{
int arr[MAX_SIZE];
int size;
int i,j,temp;
printf("enter size of array:");
scanf("%d",&size);
printf("enter element in array:");
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<size;i++)
{
for(j=i+1;j<size;i++)
{
if(arr[i]>arr[j])
{
temp=arr[i];
arr[i]=arr[i];
arr[i]=temp;
}
}
}
printf("\n element of array in ascending order:");
for(i=0;i<size;i++)
{
printf("%d\t",arr[i]);
}
return 0;
}
