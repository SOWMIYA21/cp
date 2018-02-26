#include<stdio.h>
int main()
{
char str[50];
int i,count=1;
printf("Enter the sentence:");
scanf("%s[^\n]",str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]=='')
{
count=count+1;
}
}
printf("\n number of words %d",count);
return 0;
}
