#include<stdio.h>
int main()
{
    int a[100];
    int n,i;
    int sum=0;
    float avg;
        printf("enter number of elements:");
        scanf("%d",&n);

        printf("enter %d elements:\n",n);
            for(i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
                sum=sum+a[i];
            }
            avg=sum/(float)n;
            printf("total=%d\n",sum);
            printf("average=%f\n");

            return 0;
}
