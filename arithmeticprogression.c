#include<stdio.h>
#include<stdlib.h>
int main()
{
int first,diff,n,values,sum=0,i;
printf("Enter the number of terms in AP series\n");
scanf("%d",&terms);
printf("enter the first terms and common difference of AP series\n");
scanf("%d",&first,&diff);
value=first;
printf("AP series\n");
for(i=0;i<n;i++)
{
printf("%d",value);
sum+=value;
value=value+diff;
}
printf("\n sum of the AP series till %d terms is %d\n",n,sum);
getch();
return 0;
}
