#include<stdio.h>
int main()
{
int l,b,h;
scanf("%d%d%d",&l,&b,&h);
int volume,tsa;
volume=l*b*h;
tsa=2*((l*b)+(b*h)+(h*l));
printf("\n volume=%d",volume);
printf("\n tsa=%d",volume);
printf("\n tsa=%d",tsa);
return 0;
}
