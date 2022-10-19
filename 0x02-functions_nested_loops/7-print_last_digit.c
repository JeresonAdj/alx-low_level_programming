#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @x: number's last digit result
 * Return: the value of the last digit
 */
int print_last_digit(int x)
{
	int z;

	z = (x % 10);

	if (z < 0)
	{
		z = (-1 * z);
	}

	_putchar(z + '0');
	return (z);
}
