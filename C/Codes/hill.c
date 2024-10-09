#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

// constants
#define GRAVITY 1
#define JUMP_FORCE 10
#define OBSTACLE_COUNT 3
#define MAX_HEIGHT 20
#define MAX_WIDTH 40

// player struct
typedef struct {
    int x, y;
    int velocity;
} Player;

// obstacle struct
typedef struct {
    int x, y;
    int size;
} Obstacle;

// function prototypes
void update(Player *player, Obstacle obstacles[], int *score);
void draw(Player player, Obstacle obstacles[], int score);
void jump(Player *player);

int main() {
    // initialize player and obstacles
    Player player = {5, MAX_HEIGHT - 2, 0};
    Obstacle obstacles[OBSTACLE_COUNT] = {
        {MAX_WIDTH + 10, MAX_HEIGHT - 2, 5},
        {MAX_WIDTH + 25, MAX_HEIGHT - 5, 3},
        {MAX_WIDTH + 40, MAX_HEIGHT - 3, 4}
    };
    int score = 0;

    // game loop
    while (1) {
        if (kbhit()) {
            char ch = getch();
            if (ch == ' ') {
                jump(&player);
            }
        }
        update(&player, obstacles, &score);
        draw(player, obstacles, score);
        Sleep(50); // sleep for 50 milliseconds
    }

    return 0;
}

// update player and obstacles
void update(Player *player, Obstacle obstacles[], int *score) {
    // update player velocity and position
    player->velocity += GRAVITY;
    player->y += player->velocity;

    // check if player hits the ground
    if (player->y >= MAX_HEIGHT - 2) {
        player->y = MAX_HEIGHT - 2;
        player->velocity = 0;
    }

    // update obstacle positions
    for (int i = 0; i < OBSTACLE_COUNT; i++) {
        obstacles[i].x--;
        if (obstacles[i].x == 0) {
            obstacles[i].x = MAX_WIDTH + 10 + rand() % 20;
            obstacles[i].size = rand() % 5 + 1;
            (*score)++;
        }

        // check for collision with player
        if (obstacles[i].x <= player->x && obstacles[i].x + obstacles[i].size > player->x && obstacles[i].y == player->y) {
            printf("Game over! Score: %d\n", *score);
            exit(0);
        }
    }
}

// draw player and obstacles
void draw(Player player, Obstacle obstacles[], int score) {
    // clear screen
    system("cls");

    // draw player
    for (int i = 0; i < player.y; i++) {
        printf("\n");
    }
    printf("O\n");

    // draw obstacles
    for (int i = 0; i < OBSTACLE_COUNT; i++) {
        for (int j = 0; j < obstacles[i].x; j++) {
            printf(" ");
        }
        for (int j = 0; j < obstacles[i].size; j++) {
            printf("#");
        }
        printf("\n");
    }

    // draw score
    printf("Score: %d\n", score);
}

// make player
void jump(Player *player) {
player->velocity = -JUMP_FORCE;
} 