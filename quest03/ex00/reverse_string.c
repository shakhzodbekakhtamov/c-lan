#include <string.h>

char* reverse_string(char *param_1)  
{  
     
    int i, len, temp;  
    len = strlen(param_1);
      
    
    for (i = 0; i < len/2; i++)  
    {  
        
        temp = param_1[i];  
        param_1[i] = param_1[len - i - 1];  
        param_1[len - i - 1] = temp;  
    }  
    return param_1;
}
