#include "main.h"

/**
 * _strlen_recursion - Return length of a string.
 * @s: calculate length of
 * Return: length string
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

/**
 * pal_checker - check if string is palindromic
 * @s: string to check
 * @i: iterator
 * @j: int
 * Return: 1 if palindromic, otherwise  0
 */
int pal_checker(char *s, int p, int x)
{
	if (s[p] == s[x])
		if (p > x / 2)
			return (1);
		else
			return (pal_checker(s, p + 1, x - 1));
	else
		return (0);
}

/**
 * is_palindrome - check if string is palindromic
 * @s: string
 * Return: 1 palindromic, otherwise 0
 */
int is_palindrome(char *s)
{
	return (pal_checker(s, 0, _strlen_recursion(s) - 1));
}
