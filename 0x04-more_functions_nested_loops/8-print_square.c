#include "main.h"

/**
* print_square - prints a square in the terminal using the #
* @size: size of the square
*/
void print_square(int size)
{
int sq1;
int sq;

if (size <= 0)
_putchar('\n');
{
for (sq = 0; sq < size; sq++)
{
for (sq1 = 0; sq1 < size; sq1++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
