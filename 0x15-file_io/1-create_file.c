#include "main.h"
/**
 * create_file -creates char array & initializes
 * @text_content: NULL terminated string for writin
 * @filename:name of file created
 * Return: 1 pass, -1 fail
 */

int create_file(const char *filename, char *text_content)
{
	int j, p, lengt = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lengt = 0; text_content[lengt];)
			lengt++;
	}

	j = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	p = write(j, text_content, lengt);

	if (j == -1 || p == -1)
		return (-1);

	close(j);

	return (1);
}
