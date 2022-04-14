#include <stdio.h>

void my_print_reverse_alphabet(){
    for (char i = 'z'; i >= 'a'; i--){
        putchar(i);
    }
        write(1, "\n", 1);
}