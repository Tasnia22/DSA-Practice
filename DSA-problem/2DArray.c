#include<stdio.h>
int main()
{

    int i,j,r,c;
    int a[10][10],b[10][10],t[10][10];
    printf("Enter the row number\n: ");
    scanf("%d",&r);

    printf("Enter the column number\n: ");
    scanf("%d",&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            t[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("Addition values: \n");



    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("\t%d",t[i][j]);
    }

    printf("\n");
    }
    return 0;



}
