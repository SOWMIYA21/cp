#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	char ch;
	printf("Enter an alphabet : ");
	scanf("%c",&ch);
	if(ch=='a' || ch=='A' || ch=='e' || ch=='E' ||
	ch=='i' || ch=='I' || ch=='o' || ch=='O' ||
	ch=='u' || ch=='U')
	{
		printf("This is a vowel");
	}
	else
	{
		printf("This is not a vowel");
	}
	getch();
}
