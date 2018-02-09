#include<stdio.h>
int main()
{
int num1,num2;
printf("\n enter the two number:");
scanf("%d%d",&num1,&num2);
printf("number before swapping");
swap(&num1,&num2);
printf("number after swapping");
return 0;
}
