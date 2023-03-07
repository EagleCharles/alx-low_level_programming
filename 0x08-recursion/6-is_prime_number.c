#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: parameter to check
 * Return: 1 if prime number and 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @n: input
 * @i: iterator
 * Return: 1 if prime number and 0 otherwise
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	else if (n % i == 0 && i > 0)
		return (0);
	else
		return (actual_prime(n, i - 1));
}
