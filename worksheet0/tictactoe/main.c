#include <stdio.h>
#include "helpers.h"

int main() {
    char board[3][3];
    int choice;
    int row, col;
    char player = 'X';
    int moves = 0;

    initBoard(board);

    while (1) {
        printBoard(board);
        printf("Player %c, enter a number (1-9): ", player);
        scanf("%d", &choice);

        row = (choice - 1) / 3;
        col = (choice - 1) % 3;

        if (board[row][col] == 'X' || board[row][col] == 'O') {
            printf("Invalid move, try again.\n");
            continue;
        }

        makeMove(&board[row][col], player);
        moves++;

        if (checkWin(board)) {
            printBoard(board);
            printf("Player %c wins!\n", player);
            break;
        }

        if (moves == 9) {
            printBoard(board);
            printf("It's a draw!\n");
            break;
        }

        player = (player == 'X') ? 'O' : 'X';
    }

    return 0;
}
