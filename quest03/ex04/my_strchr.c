#include <stdio.h>
#include <string.h>    
char* my_strchr(const char* str, int c)     {
    const char* position = NULL;
    size_t i = 0;
    for(i = 0; ;i++) {
        if((unsigned char) str[i] == c) {
            position = &str[i];
            break;
        }
        if (str[i]=='\0') break;
    }
    return (char *) position;
};