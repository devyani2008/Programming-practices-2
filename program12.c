//enter your name and print it
#include<stdio.h>
int main()
{
    char name[50];
    int i;
    printf("enter your name:");
    scanf("%s",name);
    printf ("name printed vertically:\n");
    for(i=0;name[i]!='\0';i++)
    {
        printf("%c\n",name[i]);
    }
    return 0;
}
