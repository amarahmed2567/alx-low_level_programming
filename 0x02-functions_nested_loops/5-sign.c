#include "main.h"
/**
*print_sign-prints sign of a number
*@n: character to be verified
*Return: return 0 or 1
*/
int print_sign(int n)
{
if (n == 0)
{
_putchar('0');
_putchar('\n');
return (0);
}
else if (n > 0)
{
_putchar('+');
_putchar('\n');
return (1);
}
else
{
_putchar('-');
_putchar('\n');
return (-1);
}

}