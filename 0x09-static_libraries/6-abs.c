#include "main.h"
/**
 * _abs - a function that computes the absolute value of an integer
 * @absv: integer input
 * Return: Absolute value of absv
 */
int _abs(int absv)
{
	return (absv * ((absv > 0) - (absv < 0)));
}
