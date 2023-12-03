#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 * @str: The string to hash.
 * Return: The calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int q;

	hash = 5381;
	while ((q = *str++))
		hash = ((hash << 5) + hash) + q; /* hash * 33 + q */

	return (hash);
}
