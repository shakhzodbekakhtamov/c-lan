#include <stdio.h>
#include <ctype.h>

int my_isdigit(char param_1)
{
    if (isdigit(param_1) == 0){
        return 0;
    }else{
        return 1;
    }
}