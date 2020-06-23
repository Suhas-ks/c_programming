#include <stdio.h>
#include <stdlib.h>

char square[10] = { '_', '_', '_', '_', '_', '_', '_', '_', '_', '_' };
int player, choice;


int checkWin();
void displayBoard();
void markBoard(char mark);

int main()
{
    int status;
    char mark;
    player = 1;

    do
    {
        displayBoard();
        player = (player % 2) ? 1 : 2;

        printf("player %d, enter a number:  ", player);
        scanf("%d", &choice);

        mark = (player == 1) ? 'X' : 'O';
        markBoard(mark);
        
        status = checkWin();

        player++;
    }while (status ==  -1);
    
    displayBoard();
    
    if (status == 1)
        printf("==>\aPlayer %d wins\n", --player);
    else
        printf("==>\aGame draw\n");


    return 0;
}


// 1 FOR GAME IS OVER WITH RESULT
// -1 FOR GAME IS IN PROGRESS
// 0 GAME IS OVER AND NO RESULT

int checkWin()
{
    if (square[1] == square[2] && square[2] == square[3])
        return 1;
        
    else if (square[4] == square[5] && square[5] == square[6])
        return 1;
        
    else if (square[7] == square[8] && square[8] == square[9])
        return 1;
        
    else if (square[1] == square[4] && square[4] == square[7])
        return 1;
        
    else if (square[2] == square[5] && square[5] == square[8])
        return 1;
        
    else if (square[3] == square[6] && square[6] == square[9])
        return 1;
        
    else if (square[1] == square[5] && square[5] == square[9])
        return 1;
        
    else if (square[3] == square[5] && square[5] == square[7])
        return 1;
        
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
        square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] 
        != '7' && square[8] != '8' && square[9] != '9')

        return 0;
    else
        return  - 1;
}

void markBoard(char mark)
{

if (choice == 1 && square[1] == '_')
            square[1] = mark;
            
        else if (choice == 2 && square[2] == '_'){
            square[2] = mark;
        }
            
        else if (choice == 3 && square[3] == '_'){
            square[3] = mark;
        }
            
        else if (choice == 4 && square[4] == '_'){
            square[4] = mark;
        }
            
        else if (choice == 5 && square[5] == '_'){
            square[5] = mark;
        }
            
        else if (choice == 6 && square[6] == '_'){
            square[6] = mark;
        }
            
        else if (choice == 7 && square[7] == '_'){
            square[7] = mark;
        }
            
        else if (choice == 8 && square[8] == '_'){
            square[8] = mark;
        }
            
        else if (choice == 9 && square[9] == '_'){
            square[9] = mark;
        }
            
        else
        {
            printf("Invalid move ");

            player--;
            getchar();
        }
    }


void displayBoard()
{
    system("clear"); // clears the screen
    printf("\n\n\tTic Tac Toe\n\n");

    printf("Player 1 (X)  -  Player 2 (O)\n\n\n");


    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[7], square[8], square[9]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[4], square[5], square[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[1], square[2], square[3]);

    printf("     |     |     \n\n");
}
