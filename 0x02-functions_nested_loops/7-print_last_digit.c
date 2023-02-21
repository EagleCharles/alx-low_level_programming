#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number
 * @c: parameter to be checked
 * Return: a
 */

int print_last_digit(int c)
{
	int a;

	a = c % 10;
	if (c < 0)
		a = -a;
	_putchar(a + '0');
	return (a);
}
