#include<stdio.h>
int main()
{
	int i,count=0;
	char a[100];
	for(i=0;i<100;i++)
	{
		scanf("%s",&a[i]);
	}
for(i=0;a[i]!=0;i++)
{
	if(a[i]=='.')
	count++;
}
printf("%d",count);
return 0;
}
