#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int digit(char *inp);
void wellplaced(char *inp, char *atr);
void misplaced(char *inp, char *atr);
void mastermind(char *atr, int attempts)
{
    
    printf("Will you find the secret code?\n---\n");
    char input[5];
    for (int i = 0; i < attempts; i++)
    {
        printf("Round %i\n>",i);
        scanf("%s", input);
        if (digit(input))
        {
            if (strcmp(input, atr) == 0)
            {
                printf("Congratz! You did it!\n");
                break;
            }
            wellplaced(input, atr);
            misplaced(input, atr);
            printf("---\n");
            if (i == attempts - 1)
            {
                printf("Failure!!!\n");
                printf("The secret code was %s\n", atr);
            }
        }
        else
        {
            printf("Wrong input!\n");
        }
    }
}

int digit(char *inp)
{
    for (int i = 0, len = strlen(inp); i < len; ++i)
    {
        if (!isdigit(inp[i]))
        {
            return 0;
        }
    }
    return 1;
}

void wellplaced(char *inp, char *atr)
{
    int c = 0;
    for (int i = 0, len = strlen(atr); i < len; i++)
    {
        if (inp[i] == atr[i])
        {
            c++;
        }
    }
    printf("Well placed pieces: %i\n", c);
}

void misplaced(char *inp, char *atr)
{
    int c = 0;
    for (int i = 0, len = strlen(atr); i < len; i++)
    {
        if (inp[i] == atr[i])
        {
            c++;
        }
    }
    int w = 0;
    for (int i = 0, len = strlen(atr); i < len; i++)
    {
        for (int j = 0, leng = strlen(inp); j < leng; j++)
        {
            if (atr[i] == inp[j])
            {
                w++;
            }
        }
    }
    printf("Misplaced pieces: %i\n", w-c);
}