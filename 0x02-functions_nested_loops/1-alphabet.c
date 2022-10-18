#include <stdio.h>
#include "main.h"
/*
  *Print Alphabet with 28char
  *end with new line 
*/
void print_alphabet(void){    
char c;
for (c = 'a'; c <= 'z'; ++c){
    _putchar(c);
}
    _putchar('\n');
}
