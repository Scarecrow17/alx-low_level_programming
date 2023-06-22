#include "main.h"

/**
 * _isalpha - Check if char c is alphabetic
 * Return: 1 if char c is alphabetic, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

