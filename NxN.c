#include <stdio.h>
#include <string.h>
#include <malloc.h>

void main()
{
    // FIXME Use better names for variables. Done
    int boardsize, input_row,input_column,display_row,display_column,display_dash;
    int check_row,check_column,check_diagonal1,check_diagonal2,row_number,column_number;
    int count_horizontal,count_vertical,count_diagonal1,count_diagonal2;
    count_horizontal=0;
    count_vertical=0;
    count_diagonal1=0;
    count_diagonal2=1;
    //Fix this. DONE
    printf("Enter size of board :");
    scanf("%d", &boardsize);
    while(boardsize<3)
    {
        boardsize=0;
        scanf("%d", &boardsize);
    }

    // Fix me why 99?.DONE


   char board[99][99]={};
    printf("Enter only X or O");
    for (input_row=0; input_row<boardsize; input_row++)
    {
        printf("\n   Enter values for ROW %d :", input_row+1);
        for (input_column=0; input_column<boardsize; input_column++)
        {
            // Fix Me why are you taking random input. DONE
           while (board[input_row][input_column]!='x' && board[input_row][input_column]!='o')
           {
             scanf(" %c", &board[input_row][input_column]);
           }
        }
    }

    printf("\n\n");

    for (display_row=0; display_row<boardsize; display_row++)
    {
        printf("   ");
        for (display_column=0; display_column<boardsize; display_column++)
        {
            printf("| %c |",board[display_row][display_column]);
        }

        printf("\n   ");

        for (display_dash=0; display_dash<boardsize; display_dash++)
        {
            printf("|---|");
        }
        printf("\n");
    }

    for(check_row=0; check_row<boardsize; check_row++)
    {
        for(check_column=0; check_column<boardsize; check_column++)
        {
            if(count_horizontal==boardsize)
            {
                break;
            }
            else if (board[check_row][0]==board[check_row][check_column])
            {
                count_horizontal=count_horizontal+1;
                if (count_horizontal==boardsize)
                {
                    printf("\n  %c is the winner", board[check_row][0]);
                    row_number=check_row;
                }
            }
            else
            {
                count_horizontal=0;
                break;
            }
        }
    }
    for(check_column=0; check_column<boardsize; check_column++)
    {
        for(check_row=0; check_row<boardsize; check_row++)
        {
            if(count_vertical==boardsize)
            {
                break;
            }
            else if (board[0][check_column]==board[check_row][check_column])
            {
                count_vertical=count_vertical+1;
                if (count_vertical==boardsize)
                {
                    printf("\n  %c is the winner", board[0][check_column]);
                    column_number=check_column;
                }
            }
            else
            {
                count_vertical=0;
                break;
            }
        }
    }
    for (check_diagonal1=0; check_diagonal1<boardsize; check_diagonal1++)
    {
        if (board[0][0]==board[check_diagonal1][check_diagonal1])
        {
            count_diagonal1=count_diagonal1+1;
            if(count_diagonal1==boardsize)
            {
                printf("\n  %c is the winner",board[0][0]);
            }
        }
        else
        {
            count_diagonal1=0;
            break;
        }
    }
    for(check_diagonal2=1; check_diagonal2<boardsize; check_diagonal2++)
    {
        if (board[boardsize-check_diagonal2][check_diagonal2-1]==board[(boardsize-check_diagonal2)-1][check_diagonal2])
        {
            count_diagonal2=count_diagonal2+1;
            if(count_diagonal2==boardsize)
           {
              printf("\n  %c is the winner",board[0][boardsize-1]);
           }
        }
        else
        {
            count_diagonal2=0;
            break;
        }
    }
    // FIXME SIMPLIFY THIS. DONE
     if (count_horizontal!=boardsize && count_vertical!=boardsize && count_diagonal1!=boardsize && count_diagonal2!=boardsize )
     {
        printf("\n   Match Drawn");
     }
         printf("\n");

    for (display_row=0; display_row<boardsize; display_row++)
    {
        if(row_number==display_row)
        {
            printf("   ");
           for(display_column=0; display_column<boardsize; display_column++)
           {
               printf("|   |");
           }
           printf("\n   ");
           for(display_dash=0; display_dash<boardsize; display_dash++)
           {
               printf("|---|");
           }
           printf("\n");
           continue;
        }
        printf("   ");
        for (display_column=0; display_column<boardsize; display_column++)
        {
            if (column_number==display_column)
            {
                printf("| * |");
                continue;
            }
            if (count_diagonal1==boardsize)
            {
                if(display_column==display_row)
                {
                    printf("| * |");
                    continue;
                }
            }
            else if (count_diagonal2==boardsize)
            {
                if(display_column==boardsize-1-display_row)
                {
                    printf("| * |");
                    continue;
                }
            }
            printf("|   |",board[display_row][display_column]);
        }

        printf("\n   ");

        for (display_dash=0; display_dash<boardsize; display_dash++)
        {
            printf("|---|");
        }
        printf("\n");
    }
}
