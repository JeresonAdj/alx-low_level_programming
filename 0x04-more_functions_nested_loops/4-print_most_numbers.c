#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9
 *
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int y;

	for (y = 0; y <= 9; y++)
	{
		if ((y == 2) || (y == 4))
			continue;
		else
			_putchar(y + '0');
	}
	_putchar('\n');
	return (0);
}
