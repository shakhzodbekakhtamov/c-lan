#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include "my_game.h"
#define ATTEMPTS 10
int main(int argc, char *argv[])
{
    if (argc == 5)
    {
        mastermind(argv[2], atoi(argv[4]));
    }
    else if (argc == 3)
    {
        mastermind(argv[2], ATTEMPTS);
    }
    else
    {
        char atr[5];
        srand(time(0));
        snprintf(atr, 5, "%d", 1000+(rand()%8000));
        mastermind(atr, ATTEMPTS);
    }
    return 0;
}