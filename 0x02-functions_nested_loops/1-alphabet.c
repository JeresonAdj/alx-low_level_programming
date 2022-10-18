#include <stdio.h>
/**
 *main - Entery point
 *description: 'listing alphabeth'
 *Return: Always 0
 */
void print_alphabet(void);
int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	for (char c = 'a'; c <= 'z'; c++)
	{
	putchar(c);
	}
}

