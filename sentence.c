#include<stdio.h>
#include<conio.h>
void main()
{
char s[200];
int count=0,i;
printf("enter the strring\n");
scanf("%\n%s",s);
for(i=0;s[i]!='0';i++)
{
if(s[i]=='')
count++;
}
printf("number of words in given string are:%d\n",count+1);
}
