#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* my_spaceship(char* road)
{
    int x = 0, y = 0;
    char *direction = "up";
    for (int i = 0; i < strlen(road); i++)
    {
        // determining the direction
        if (road[i] == 'R' && (strcmp(direction, "up") == 0))
        {
            direction = malloc(6);
            strcpy(direction,"right");
        }
        else if (road[i] == 'L' && (strcmp(direction, "up") == 0))
        {
            direction = malloc(5);
            strcpy(direction,"left");
        }
        else if (road[i] == 'R' && (strcmp(direction, "down") == 0))
        {
            direction = malloc(6);
            strcpy(direction,"right");
        }
        else if (road[i] == 'L' && (strcmp(direction, "down") == 0))
        {
            direction = malloc(5);
            strcpy(direction,"left");
        }
        else if (road[i] == 'R' && (strcmp(direction, "right") == 0))
        {
            direction = malloc(5);
            strcpy(direction,"down");
        }
        else if (road[i] == 'L' && (strcmp(direction, "right") == 0))
        {
            direction = malloc(3);
            strcpy(direction,"up");
        }
        else if (road[i] == 'R' && (strcmp(direction, "left") == 0))
        {
            direction = malloc(3);
            strcpy(direction,"up");
        }
        else if (road[i] == 'L' && (strcmp(direction, "left") == 0))
        {
            direction = malloc(5);
            strcpy(direction,"down");
        }
        if (road[i] == 'A' && (strcmp(direction, "up") == 0)) {
            y--;
        }
        else if (road[i] == 'A' && (strcmp(direction, "down") == 0))
        {
            y++;
        }
        else if (road[i] == 'A' && (strcmp(direction, "right") == 0))
        {
            x++;
        }
        else if (road[i] == 'A' && (strcmp(direction, "left") == 0))
        {
            x--;
        }
    }

    char *result = malloc(30);
    snprintf(result, strlen(direction) + 30, "{x: %d, y: %d, direction: '%s'}", x, y, direction);
    return result;
}