#include <stdio.h>
/**
 * main - lower case followed by new line
 * Return : 0
 */
int main(void)
{
	char lal;

	for (lal = 'a'; lal <= 'z'; lal++)
	{
		if (lal != 'e' && lal != 'q')
			putchar(lal);
	}

	putchar('\n');

	return (0);
}
