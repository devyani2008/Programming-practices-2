//find total averge
#include<stdio.h>
int main()
{
    int a[100],n,i;
    int sum=0;
    float avg;
    printf("enter number of element:");
    scanf("%d",&n);
    printf("enter %d element;\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/(float)n;
    printf("TOTAL=%d\n",sum);
    printf("averager=%f\n",avg);
    return 0;
}

