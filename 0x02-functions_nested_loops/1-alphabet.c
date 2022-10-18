#include <stdio.h>
#include "main.h"

int main() {
   
 print_alphabet();
    
  return 0;
}
void print_alphabet(){

    char c;

    for (c = 'A'; c <= 'Z'; ++c)
    _putchar(c);
    _putchar('\n');

}
