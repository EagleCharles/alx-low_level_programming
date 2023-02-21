#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: parameter to be considered
 * Return: n
 */

int _abs(int n)
{
	if (n < 0)
		n = -(n);
	else if (n >= 0)
		n = n;
	return (n);
}
