#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - detects palindrome
 * @s: parameter to check
 * Return: 1 if palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	else
		return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: parameter to consider
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks the characters recursively for palindome
 * @s: parameter to check
 * @i: iterator
 * @len: length of string
 * Return: 1 if palindrome and 0 if not
 */

int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	else if (i >= len)
		return (1);
	else
		return (check_pal(s, i + 1, len - 1));
}
