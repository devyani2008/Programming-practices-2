#include<stdio.h>
#include<string.h>
int main()
{
    int a[2][2],b[2][2],c[2][2]={0},i,j,k;
    printf("enter first matrix:\n");
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            scanf("%d",&a[i][j]);

    printf("enter secound matrix:\n");
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            scanf("%d",&b[i][j]);

        for(i=0;i<2;i++)
            for(j=0;j<2;j++)
                for(k=0;k<2;k++)
                c[i][j]=a[i][k]*b[k][j];

        printf("multiplication of matrix:\n");
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            printf("%d",c[i][j]);
            printf("\n");
        }
        return 0;
            }
