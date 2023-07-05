#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - return if integer is prime or not
 * @n: number to check
 * Return: 1 if prime, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculate if a number is prime
 * @n: num to check if prime
 * @i: iterator
 * Return: 1 if prime, 0 otherwise
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
