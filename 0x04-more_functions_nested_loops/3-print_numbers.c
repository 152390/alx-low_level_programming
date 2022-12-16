#include "main.h"
/**
 * print_numbers - prints 0123456789\n
 *
 * Return 0-9 folowed by new line
 */
void print_numbers(void)
{
int i;

for (i = 0; i <= 9; i++)
_putchar(i + '0');
_putchar('\n');
}
