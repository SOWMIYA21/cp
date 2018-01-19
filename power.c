#include<stdio.h>
#include<math.h>
int main()
{
double base,expo,power;
printf("enter base:");
scanf("%lf",&base);
printf("enter exponent:");
scanf("%1f",&expo);
power=pow(base,expo);
printf("%.2l^%.2lf=%.2lf",base,expo,power);
return 0;
}
