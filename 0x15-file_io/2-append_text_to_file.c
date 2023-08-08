#include "main.h"

/**
 * append_text_to_file - Append text at end of file
 * @filename: pointer to file's name
 * @text_content: string added at end of file
 * Return: -1 fail or 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int j, p, lengt = 0;


	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lengt = 0; text_content[lengt];)
			lengt++;
	}

	j = open(filename, O_WRONLY | O_APPEND);
	p = write(j, text_content, lengt);

	if (j == -1 || p == -1)
		return (-1);

	close(j);

	return (1);
}
