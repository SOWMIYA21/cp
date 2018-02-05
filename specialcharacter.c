#include<stdio.h>
#include<string.h>
void main()
{
char a[10000]="8**";
in b,q=0,i;
char j;
b=strlen(a);
for(i=0;i<b:i++)
{
if(ispunct(a[i]))
q++;
}
printf("%d",q);
}
