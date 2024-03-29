#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns sum of two numbers
 * @a: num1
 * @b: num2
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns difference of two numbers
 * @a: num1
 * @b: num2
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a -  b);
}

/**
 * op_mul - returns product of two numbers
 * @a: num1
 * @b: num2
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns quotient of two numbers
 * @a: num1
 * @b: num2
 * Return: quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns remainder of two numbers
 * @a: num1
 * @b: num2
 * Return: remainder of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
