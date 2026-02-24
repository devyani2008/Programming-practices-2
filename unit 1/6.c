#include<stdio.h>
int main()
{
    int a[100],b[100];
    int n,i;
        printf("enter number of elements:");
        scanf("%d",&n);

        printf("enter %d elements:\n",n);
            for(i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
            }
            printf("array elements in reverse order:\n");
            for(i=n-1;i>0;i--)
            {
                printf("%d",a[i]);
            }
            return 0;
}
