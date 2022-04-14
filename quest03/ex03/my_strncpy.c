#include <stdio.h>
#include <string.h>
char *my_strncpy(char *dst, const char *src, int n) {
    char *d;
    size_t i;
    for (i=0, d=dst; i<n; i++, *d++ = (*src == '\0') ? '\0' : *src++) { 
    }
    return dst; 
}
