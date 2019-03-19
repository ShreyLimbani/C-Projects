#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int matrix[4][4]={{4,13,7,12},{11,14,10,3}, {5,9,15,1}, {6,2,8}};
int x = 3, y = 3, StepCount =0;
int IdealMatrix[4][4] ={{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,0}};

void PrintMatrix()
{
    int i, j;
    for(i=0; i<4; i++)
    {
        printf("\n\t----------------\n\t");
        for(j=0; j<4; j++)
        {
            if(matrix[i][j] != 0)
                printf("|%2d|", matrix[i][j]);
            else
                printf("|  |");
        }
    }
    printf("\n\t----------------\n");
}

int ReadDirections()
{
    int ch, value = 0;
   ch = getch ();
if (ch == 0 || ch == 224)
{
    StepCount++;
    switch (getch ())
    {
        case 72:// UpArrow
            if(x>0)
            {ExchangeRow(x, x-1);
            x = x-1;
            }
            else
                printf("\a");
            return value;
            break;

        case 80://DownArrow
            if(x<3)
            {ExchangeRow(x, x+1);
            x = x+1;
            }
            else
                printf("\a");
            return value;
            break;

        case 75://LeftArrow
            if(y>0)
            {ExchangeCol(y, y-1);
            y = y-1;}
            else
                printf("\a");
            return value;
            break;

        case 77://RightArrow
            if(y<3)
            {ExchangeCol(y, y+1);
            y = y+1;}
            else
                printf("\a");
            return value;
            break;
        default :
            value = 1;
            return value;
    }
}
else if (ch == 'q' || ch == 'Q')
    {value = 1;
return value;}
}

void ExchangeRow(int a, int b)
{
    int temp;
    temp = matrix[a][y];
    matrix[a][y] = matrix[b][y];
    matrix[b][y] = temp;
}

void ExchangeCol(int a, int b)
{
    int temp;
    temp = matrix[x][a];
    matrix[x][a] = matrix[x][b];
    matrix[x][b] = temp;
}

int Check()
{
    int i, j, true_count=0;
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {if(matrix[i][j] == IdealMatrix[i][j] )
            true_count++;
        else
            break;
        }
        if(j!=4)
            break;
    }
    if(true_count == 16)
    return 1;
    else
        return 0;
}

void main()
{
    printf("\n\t!!!15 BLOCKS GAME !!!\n\n");
    int value=0, result=0;
    while ( value != 1)
    {
    PrintMatrix();
    result = Check();
    if(result == 1)
    {
        printf("\n\tCONGRATULATIONS YOU HAVE WON!!!\n\n");
        value = 1;
        exit(0);
    }
    printf("\n\t STEP COUNT - %d", StepCount);
    value = ReadDirections();

    system("cls");
    }
}
