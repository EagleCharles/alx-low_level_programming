#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: parameter to be checked
 * @y: power of x
 * Return: Value of x to power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}