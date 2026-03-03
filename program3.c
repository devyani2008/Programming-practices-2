// mini max
#include<stdio.h>
int main()
{

    int n,i;
    int a[100];
    int max,min;
    printf("enter number of element:");
    scanf("%d",&n);
    printf("enter %d element:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
    }
    printf("max=%d\n",max);
    printf("min=%d\n",min);

    return 0;
}
