#include <string.h>
char* my_strrchr(char* param_1, char param_2)
{
    int i;
for (i = strlen(param_1)-1; i >= 0 ;i--){
    if(param_1[i] == param_2){
        param_1 += i;
        return param_1;
    }
}
return 0;
}

