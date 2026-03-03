//print 3*3 matrix
#include<stdio.h>
int main()
{
    int a[3][3],i,j;
    printf("enter element for matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("3*3 matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",a[i][j]);
        }
    printf("\n");
    }
    return 0;
}
