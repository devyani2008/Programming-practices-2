#include<stdio.h>
int main()
{
    int a[100];
    int n,i;
    int max,min;
        printf("enter number of elements:");
        scanf("%d",&n);

        printf("enter %d elements:\n",n);
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
            printf("maximun=%d\n",max);
            printf("minimu=%d\n",min);

            return 0;
}
