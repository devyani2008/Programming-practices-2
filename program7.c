//merge two array
#include<stdio.h>
void main()
{
    int n1,n2,i;
    int a[50],b[50],c[100];
    printf("enter element of 1st array:");
    scanf("%d",&n1);
    printf("enter element of 1st array:\n");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
        c[i]=a[i];
    }
    printf("enter element of 2nd array:");
    scanf("%d",&n2);
    printf("enter element of 2nd array:\n");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
        c[n1+i]=b[i];
    }
    printf("merged array:\n");
    for(i=0;i<n1+n2;i++)
    {
        printf("%d",c[i]);
    }
    return 0;
}
