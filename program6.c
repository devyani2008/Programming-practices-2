//revers
#include<stdio.h>
int main()
{
    int n,i;
    int a[100];
    printf("enter number of element:");
    scanf("%d",&n);
    printf("enter %d numer:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("array element of revers order:\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
    return 0;
}



