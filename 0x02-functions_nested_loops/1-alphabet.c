#include <stdio.h>
#include "main.h"

void print_alphabet(void){
    /*
    *Print Alphabet with 28char
    *end with new line 
    */
    char c;

    for (c = 'a'; c <= 'z'; ++c)
    {
    _putchar(c);
    }
    _putchar('\n');

}
