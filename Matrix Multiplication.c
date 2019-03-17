#include<stdio.h>
void main()
{
    printf("\tMATRIX MULTIPLICATION\n");
    int a[10][10], b[10][10], c[10][10], i, j, sum;
    /*printf("Enter size of matrix A");
    scanf("%d%d",)*/
    printf("Enter values of (3x3)matrix A\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        scanf("%d", &a[i][j]);
    }
    printf("Enter values of (3x3)matrix B\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        scanf("%d", &b[i][j]);
    }
    printf("\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
           sum = 0;
           for(int k=0; k<3; k++)
           {
               sum = sum + ((a[i][k])*(b[k][j]));
           }
           c[i][j] = sum;
        }
    }
    for(i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("|%3d|", c[i][j]);
        }
        printf("\n");
    }
}
