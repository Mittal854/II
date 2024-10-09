#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

// constants
#define MAP_WIDTH 40
#define MAP_HEIGHT 20
#define MOVE_SPEED 0.1
#define ROT_SPEED 0.1
#define FOV 60
#define MAX_SHOTS 5

// player struct
typedef struct {
    float x, y, angle;
} Player;

// shot struct
typedef struct {
    float x, y, angle;
    int alive;
} Shot;

// function prototypes
void draw_map(char map[][MAP_WIDTH]);
void draw_player(Player player);
void draw_shots(Shot shots[]);
void update(Player *player, Shot shots[], char map[][MAP_WIDTH]);
void fire_shot(Player player, Shot shots[]);
float distance(float x1, float y1, float x2, float y2);
void rotate(float *x, float *y, float angle);

int main() {
    // initialize player and shots
    Player player = {2, 2, 0};
    Shot shots[MAX_SHOTS] = {0};
    char map[MAP_HEIGHT][MAP_WIDTH] = {
        "########################################",
        "#                                      #",
        "#                                      #",
        "#                                      #",
        "#                                      #",
        "#                                      #",
        "#                                      #",
        "#                                      #",
        "#                                      #",
        "#                                      #",
        "#                                      #",
        "#                                      #",
        "#                                      #",
        "#                                      #",
        "#                                      #",
        "#                                      #",
        "#                                      #",
        "#                                      #",
        "#                                      #",
        "########################################"
    };

    // game loop
    while (1) {
        if (kbhit()) {
            char ch = getch();
            switch (ch) {
                case 'w': // move forward
                    player.x += MOVE_SPEED * cos(player.angle * M_PI / 180);
                    player.y += MOVE_SPEED * sin(player.angle * M_PI / 180);
                    break;
                case 's': // move backward
                    player.x -= MOVE_SPEED * cos(player.angle * M_PI / 180);
                    player.y -= MOVE_SPEED * sin(player.angle * M_PI / 180);
                    break;
                case 'a': // rotate left
                    player.angle -= ROT_SPEED;
                    if (player.angle < 0) {
                        player.angle += 360;
                    }
                    break;
                case 'd': // rotate right
                    player.angle += ROT_SPEED;
                    if (player.angle > 360) {
                        player.angle -= 360;
                    }
                    break;
                case ' ': // fire shot
                    fire_shot(player, shots);
                    break;
            }
        }
        update(&player, shots, map);
        draw_map(map);
        draw_player(player);
        draw_shots(shots);
        Sleep(50); // sleep for 50 milliseconds
    }

    return 0;
}

// draw map
void draw_map(char map[][MAP_WIDTH]) {
    system("cls");
    for (int i = 0; i < MAP_HEIGHT; i++) {
        printf("%s\n", map[i]);
    }
}

// draw player
void draw_player(Player player) {
    int x = player.x;
    int y = player.y;
    int angle = player.angle;
    int fov = FOV;

    for (int i = angle - fov / 2;
i < angle + fov / 2; i++) {
    float ray_angle = i * M_PI / 180;
    float ray_x = x;
    float ray_y = y;
    float distance_to_wall = 0;
    int hit_wall = 0;

    while (!hit_wall && distance_to_wall < 20) {
        distance_to_wall += 0.1;
        ray_x = x + distance_to_wall * cos(ray_angle);
        ray_y = y + distance_to_wall * sin(ray_angle);

        if (map[(int)ray_y][(int)ray_x] == '#') {
            hit_wall = 1;
        }
    }

    int ceiling = MAP_HEIGHT / 2 - MAP_HEIGHT / distance_to_wall;
    int floor = MAP_HEIGHT - ceiling;

    for (int j = 0; j < MAP_HEIGHT; j++) {
        if (j < ceiling) {
            printf(" ");
        } else if (j >= ceiling && j <= floor) {
            printf("|");
        } else {
            printf(" ");
        }
    }
    printf("\n");
}
}

// draw shots
void draw_shots(Shot shots[]) {
for (int i = 0; i < MAX_SHOTS; i++) {
if (shots[i].alive) {
printf("*");
}
}
printf("\n");
}

// update game
void update(Player *player, Shot shots[], char map[][MAP_WIDTH]) {
for (int i = 0; i < MAX_SHOTS; i++) {
if (shots[i].alive) {
float x = shots[i].x;
float y = shots[i].y;
float angle = shots[i].angle;
        x += 0.5 * cos(angle * M_PI / 180);
        y += 0.5 * sin(angle * M_PI / 180);

        if (map[(int)y][(int)x] == '#') {
            shots[i].alive = 0;
        } else {
            shots[i].x = x;
            shots[i].y = y;
        }
    }
}
}

// fire shot
void fire_shot(Player player, Shot shots[]) {
for (int i = 0; i < MAX_SHOTS; i++) {
if (!shots[i].alive) {
shots[i].alive = 1;
shots[i].x = player.x;
shots[i].y = player.y;
shots[i].angle = player.angle;
break;
}
}
}

// calculate distance between two points
float distance(float x1, float y1, float x2, float y2) {
float dx = x2 - x1;
float dy = y2 - y1;
return sqrt(dxdx + dydy);
}

// rotate point around origin
void rotate(float *x, float *y, float angle) {
float s = sin(angle * M_PI / 180);
float c = cos(angle * M_PI / 180);
float xnew = *x * c - *y * s;
float ynew = *x * s + *y * c;
*x = xnew;
*y = ynew;
}