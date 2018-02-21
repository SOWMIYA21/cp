#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
int alphabets=0,number=0;
scanf("%s",a);
int i,m;
m=strlen(a);
for(i=0;i<m;i++)
{
if(('a'<=a[i]&&a[i]<='z')||('A'<=a[i]&&a[i]<='z'))
{
alphabet=1;
}
if('0'<=a[i]&&a[i]<='a')
{
number=1;
}
}
if(number==1&&alphabet==1)
{
printf("yes");
}
else
printf("no");
return 0;
}
