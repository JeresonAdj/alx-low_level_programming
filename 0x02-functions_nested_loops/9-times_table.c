#include "main.h"
/**
 * times_table - a function that prints the 9 times table, starting with 0
 * rolle = row, cole = column, d = digits of current result
 * Return: times table
 * add extra space past single digit
 */
void times_table(void)
{
	int rolle, cole, d;

	for (rolle = 0; rolle <= 9; rolle++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (cole = 1; cole <= 9; cole++)
		{
			d = (rolle * cole);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');

			if (cole < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
