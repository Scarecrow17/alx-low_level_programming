#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read txt file and prints to POSIX stdout
 * @filename: point to file name
 * @letters: letter numb to print
 * Return: 0 fail or  O/w
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t j, q, p;
	char *buff;


	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	j = open(filename, O_RDONLY);
	q = read(o, buff, letters);
	p = write(STDOUT_FILENO, buff, q);

	if (j == -1 || q == -1 || p == -1 || p != q)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(j);

	return (p);
}
