#include<stdio.h>
void main()
{
int i,count=0,a;
char ch[100];
printf("\n Enter character");
scanf("%s",&ch);
a=strlen(ch);
for(i=0;i<a;i++)
{
if(ch[i]>='0'&&ch[i]<='9')
{
count++;
}
}
printf("\n numeric:%d",count);
}
