
#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif
#include <string.h>
#include <stdio.h>
char* my_join(string_array* param_1, char* param_2)
{
    char *a = (char*)malloc(param_1->size * sizeof(char));
    if(param_1->size==0){
        return 0;
    }
    for(int i = 0; i < param_1->size; i++){
        strcat(a, param_1->array[i]);
        if (i<param_1->size-1){
            strcat(a, param_2);
        }

    }
     return a;
}