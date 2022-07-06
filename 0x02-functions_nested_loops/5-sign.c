#include "main.h"

/**
 * print_sign -> prints the sign of a number
 *
 * @n: it is a character for memory location
 *
 * Return: 1, 0 -1 
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return(1);
}
else if (n == 0)
{
_putchar('0');
}
else
{
_putchar('-');
return (-1);
}
}
