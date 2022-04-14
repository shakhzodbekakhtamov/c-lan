#include <stdio.h>
#include <ctype.h>

int my_isalpha(char param_1)
{
    if (isalpha(param_1) == 0){
        return 0;
    }else{
        return 1;
    }
}