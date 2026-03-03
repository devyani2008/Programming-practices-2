#include<stdio.h>
int main()
{

    int a[100],n,i;
    printf("enter a number:");
    scanf("%d",&n);
    printf("the element are %d:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("you have entered:\n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
