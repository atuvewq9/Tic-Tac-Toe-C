#include <stdio.h>

char board[3][3] = {
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'}
};

void displayBoard()
{
    printf("\n");
int i;
    for( i = 0; i < 3; i++)
    {
        printf(" %c | %c | %c ",
               board[i][0],
               board[i][1],
               board[i][2]);

        if(i < 2)
            printf("\n-----------\n");
    }

    printf("\n");
}

void placeMark(int choice, char mark)
{
    if(choice == 1)
        board[0][0] = mark;

    else if(choice == 2)
        board[0][1] = mark;

    else if(choice == 3)
        board[0][2] = mark;

    else if(choice == 4)
        board[1][0] = mark;

    else if(choice == 5)
        board[1][1] = mark;

    else if(choice == 6)
        board[1][2] = mark;

    else if(choice == 7)
        board[2][0] = mark;

    else if(choice == 8)
        board[2][1] = mark;

    else if(choice == 9)
        board[2][2] = mark;
}

int main()
{
    int choice;
    char player = 'X';
int turn;

    for( turn = 0; turn < 9; turn++)
    {
        displayBoard();
        

        printf("Player %c, enter position: ", player);

        scanf("%d", &choice);

        placeMark(choice, player);

        // SWITCH PLAYER
        if(player == 'X')
            player = 'O';

        else
            player = 'X';
    }

    displayBoard();

    return 0;
}
