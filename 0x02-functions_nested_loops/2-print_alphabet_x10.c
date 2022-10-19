#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	char alpha, co;

	n = 0;

	while (n < 10)
	{
		for (all = 'a'; all <= 'z'; all++)
		{
			_putchar (all);
		}
		n++;
		_putchar('\n');
	}
}
