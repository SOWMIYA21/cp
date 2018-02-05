#include<stdio.h>
#include<string.h>
int main()
{
char str1[30],str[30];
int i;
printf("\n enter two string:");
gets(str1);
gets(str2);
i==0;
while(str[i]==str2[i]&&str1[i]!='\0');
i++;
if(str1[i]>str2[i])
printf("str1>str2");
else if(str1[i]>str2[i])
printf("str1<str2");
else
printf("str1=str2");
return 0;
}
