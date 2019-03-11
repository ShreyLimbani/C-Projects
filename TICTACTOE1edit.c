#include<stdio.h>
void main()
{
    int ttt[3][3]= {};

    int i,j,a,m,n;

    for ( i=0; i<3; i++)
    {
        for ( j=0; j<3; j++)
        {
            printf("\n  Value for R%d C%d :", i+1,j+1);
            scanf("%d", &ttt[i][j]);
        }
    }

    for (m=0; m<3; m++)
    {
        printf("    %d |  %d  |  %d\n",ttt[m][0],ttt[m][1],ttt[m][2]);
        printf(" -----|-----|----\n");
    }

    if(ttt[0][0]==ttt[1][1] && ttt[1][1]==ttt[2][2])
    {
        printf("%d is winner",ttt[1][1]);
    }

    else if(ttt[0][0]==ttt[0][1] && ttt[0][0]==ttt[0][2])
    {
        printf("%d is winner",ttt[0][0]);
    }

    else if(ttt[0][0]==ttt[1][0] && ttt[0][0]==ttt[2][0])
    {
        printf("%d is winner",ttt[0][0]);
    }

    else if(ttt[2][0]==ttt[2][2] && ttt[2][1]==ttt[2][2] )
    {
        printf("%d is winner",ttt[2][2]);
    }

    else if(ttt[0][2]==ttt[2][2] && ttt[1][2]==ttt[2][2])
    {
        printf("%d is winner",ttt[2][2]);
    }

    else if(ttt[0][1]==ttt[1][1] && ttt[1][1]==ttt[2][1])
    {
        printf("%d is winner",ttt[1][1]);
    }

    else if(ttt[1][0]==ttt[1][1] && ttt[1][1]==ttt[1][2])
    {
        printf("%d is winner",ttt[1][1]);
    }

    else if(ttt[2][0]==ttt[1][1] && ttt[1][1]==ttt[0][2])
    {
        printf("%d is winner",ttt[1][1]);
    }

    else
    {
        printf("The match is drawn.");
    }
}
