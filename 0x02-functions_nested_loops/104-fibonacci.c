#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * begin with 1 and 2
 * followed by a new line
 * Return: ALways 0 
 */
int main(void)
{
	unsigned long int x, y, k, y1, y2, k1, k2;

	y = 1;
	k = 2;
	printf("%lu", y);
	for (x = 1; i < 91; x++)
	{
		printf(", %lu", k);
		k = k + y;
		y = k - y;
	}
	y1 = y / 1000000000;
	y2 = y % 1000000000;
	k1 = k / 1000000000;
	k2 = k % 1000000000;
	for (x = 92; x < 99; ++x)
	{
		printf(", %lu", k1 + (k2 / 1000000000));
		printf("%lu", k2 % 1000000000);
		k1 = k1 + y1;
		y1 = k1 - y1;
		k2 = k2 + y2;
		y2 = k2 - y2;
	}
	printf("\n");

	return (0);
}
