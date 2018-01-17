#include<studio.h>
#include<conio.h>
void main()
{
int year;
printf("enter a year \n");
scanf("%d",&year);
if((year%400)==0)
printf("%d is a leap year \n",year);
else if((year%100)==0)
printf("%d is a not leap year \n",year);
else if((year%4)==0)
printf(%d is a leap year \n",year);
else
printf("%d is not a leap year \n",year);
}
