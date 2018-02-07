#include <stdio.h>

int main()
{
    int a[50],n,i,j,large,small;
    printf("enter the size:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    }
    large=a[0];
    for(i=0;i<n;i++)
    {
    if(a[i]>large)
    {
    large=a[i]; 
    a[i]=large;
    }
    }
    small=a[0];
    for(i=0;i<n;i++)
    {
    if(a[i]<small)
    {
    small=a[i];
    a[i]=small;
    }
  }
            
printf("The largest element and smallest element is:%d\n%d",large,small);
return 0;
}


