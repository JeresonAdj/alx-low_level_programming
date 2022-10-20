#include "main.h"

/**
 * more_numbers - check the code
 * _putchar only 3 times
 * Return: always 0
 */
void more_numbers(void)
{
	int y, rq;

	for (rq = 0; rq < 10; rq++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y >= 10)
			{
				_putchar((y / 10) + '0');
			}
			_putchar((y % 10) + '0');
		}
		_putchar('\n');
	}
}
