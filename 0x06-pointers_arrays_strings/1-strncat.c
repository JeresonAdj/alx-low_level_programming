#include "main.h"

/**
 * _strcat - concantenates strings
 * @dest: copy to
 * @src: copy from
 * Return: pointer 
 */
char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (src[y] != '\0')
	{
		dest[i] = src[y];
		x++;
		y++;
	}
	dest[1] = '\0';
	return (dest);
}

