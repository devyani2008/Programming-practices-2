//revers a string
#include<stdio.h>
int main()
{
    char str[100],rev[100];
    int i,length=0;
    printf("enter the string");
    scanf("%s",str);
    while(str[length]!='\0')
    {
        length++;
    }
    for(i=0;i<length;i++)
    {
        rev[i]=str[length-1-i];
    }
    rev[length]='\0';
    printf("reversed string:%s",rev);
    return 0;
}
