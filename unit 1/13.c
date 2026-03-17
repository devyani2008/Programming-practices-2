#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i=0,lenwith=0,lenwithout=0;

    printf("enter a string:");
    gets(str);
    while(str[i]!='\0')
    {
    lenwithout++;
    i++;
    }
    lenwith=strlen(str);
    printf("\nwithout string function=%d",lenwith);
    printf("\nwith string function=%d",lenwithout);

    return 0;
    }


