#include <string.h> 
 
int my_strcmp(char* param_1, char* param_2) 
{ 
     
    if(strlen(param_1) > strlen(param_2)){ 
        return -1; 
    } 
    else if(strlen(param_1) < strlen(param_2)){ 
        return 1; 
    } 
    else{ 
        return 0; 
    } 
     
    return 0;
}