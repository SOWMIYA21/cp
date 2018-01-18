#include<stdio.h>
void main()
{
clrscr();
char ch;
printf("Enter a character:");
scanf("%c",&ch);
if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='z'))
{
printf("%c is an alphabet",ch);
}
else
{
printf("%c is not an alphabet",ch);
}
getch();
