#include<stdio.h>
int main()
{
    int a,b,c,i,j,m,n;
    int mat[10][10];
    printf("enter the num of rows:");
    scanf("%d",&m);
     printf("enter the num of columns:");
    scanf("%d",&n);
    printf("enter the elements of your matrix\n", a);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("\n mat[%d][%d]=",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
     printf("the entered matrix is:\n");
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n\n");

    }



     printf("enter the elements of your matrix\n", b);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("\n mat[%d][%d]=",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
     printf("the entered matrix is:\n");
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n\n");

    }


    return 0;
}

