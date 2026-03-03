//string is palindrome or not
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,length,flag=0;
    printf("enter the string");
    gets(str);
    length=strlen(str);
    for(i=0;i<length/2;i++)
    {
        if(str[i]!=str[length-1-i])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("string is palindrome");
    }
    else
    {
        printf("string is not palindrome");
    }
    return 0;
}
