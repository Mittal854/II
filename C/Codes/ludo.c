#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BOARD_SIZE 15
#define PLAYER_COUNT 4
#define WINNING_SCORE 56

int board[BOARD_SIZE][BOARD_SIZE];
int players[PLAYER_COUNT][4];
int turn = 0;
int diceRoll = 0;

// Function to display the board
void displayBoard() {
    printf("\n");
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// Function to roll the dice
int rollDice() {
    return rand() % 6 + 1;
}

// Function to move a player's piece
void movePiece(int player, int piece, int steps) {
    int currentPosition = players[player][piece];
    int newPosition = currentPosition + steps;
    if (newPosition > WINNING_SCORE) {
        printf("Invalid move. Try again.\n");
        return;
    }
    players[player][piece] = newPosition;
    board[newPosition / BOARD_SIZE][newPosition % BOARD_SIZE] = player + 1;
    board[currentPosition / BOARD_SIZE][currentPosition % BOARD_SIZE] = 0;
}

// Function to check if a player has won the game
int hasWon(int player) {
    for (int i = 0; i < 4; i++) {
        if (players[player][i] != WINNING_SCORE) {
            return 0;
        }
    }
    return 1;
}

int main() {
    // Initialize the board and player positions
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            if ((i == 0 || i == 14) && (j == 0 || j == 14)) {
                board[i][j] = -1; // Red zones
            } else if (i == 0 || j == 0 || i == 14 || j == 14) {
                board[i][j] = -2; // Green zones
            }
        }
    }
    players[0][0] = 1;
    players[0][1] = 2;
    players[0][2] = 3;
    players[0][3] = 4;
    players[1][0] = 17;
    players[1][1] = 18;
    players[1][2] = 19;
    players[1][3] = 20;
    players[2][0] = 33;
    players[2][1] = 34;
    players[2][2] = 35;
    players[2][3] = 36;
    players[3][0] = 49;
    players[3][1] = 50;
    players[3][2] = 51;
    players[3][3] = 52;
    srand(time(NULL)); // Seed the random number generator

    // Main game loop
    while (1) {
        printf("Player %d's turn\n", turn + 1);
        printf("Press enter to roll the dice");
        getchar();
        diceRoll = rollDice();
        printf("Dice roll: %d\n", diceRoll);
        int canMove = 0;
        for (int i = 0; i < 4; i++) {
                    if (players[turn][i] != WINNING_SCORE) {
            int newPosition = players[turn][i] + diceRoll;
            if (newPosition <= WINNING_SCORE) {
                canMove = 1;
                break;
            }
        }
    }
    if (!canMove) {
        printf("No valid move. Turn skipped.\n");
        turn = (turn + 1) % PLAYER_COUNT;
        continue;
    }
    printf("Enter piece number to move: ");
    int piece = -1;
    scanf("%d", &piece);
    if (piece < 1 || piece > 4 || players[turn][piece - 1] == WINNING_SCORE) {
        printf("Invalid piece. Try again.\n");
        continue;
    }
    movePiece(turn, piece - 1, diceRoll);
    displayBoard();
    if (hasWon(turn)) {
        printf("Player %d has won the game!\n", turn + 1);
        break;
    }
    if (diceRoll < 6) {
        turn = (turn + 1) % PLAYER_COUNT;
    }
}

return 0;
}
           
