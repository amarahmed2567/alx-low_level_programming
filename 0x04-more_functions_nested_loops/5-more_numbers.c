#include "main.h"

/**
 * print_most_numbers - entry point
 *
 * Description: Prints the numbers with _putchar
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int number;

	for (number = 0; number <= 10; number++)
	{
        int fnum;
        for(fnum='0'; fnum<='14';fnum++){
	        _putchar(fnum);
        }
	}
	_putchar('\n');
}