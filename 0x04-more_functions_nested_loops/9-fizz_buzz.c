#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the numbers from 1 to 100
 * 3 multiples print Fizz instead of the number
 * 5 multiples print Buzz instead of the number
 * 3 & 5  multiples print FizzBuzz instead of the number
 * Return: Always 0 (Success)
 */
int main(void)
{
	int y;
	char c[] = "Fizz";
	char b[] = "Buzz";
	char cb[] = "FizzBuzz";

	for (y = 1; y <= 100; y++)
	{
		if (y == 100)
			printf("%s", b);
		else if ((y % 3 == 0) && (y % 5 == 0))
			printf("%s ", cb);
		else if (y % 3 == 0)
			printf("%s ", c);
		else if (y % 5 == 0)
			printf("%s ", b);
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
