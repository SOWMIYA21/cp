#include <stdio.h>
#define SIZE 200


int main()
{
    char str[SIZE];
    char * s = str;
    int  numeric,a;

     numeric = 0;
    printf("Enter any line with numeric characters: ");
    gets(str);

    while(*s)
    {
       
   if(*s>='0' && *s<='9')
           numeric++;

        s++;
        a=numeric;
    }
    printf("%d\n",a);

    return 0;
}
