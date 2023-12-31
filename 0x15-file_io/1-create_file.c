#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: content of the file
 * Return: 1 on success else -1
 */

int create_file(const char *filename, char *text_content)
{
	int file, num_chars, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}
	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	num_chars = write(file, text_content, len);
	if (file == -1 || num_chars == -1)
		return (-1);
	close(file);
	return (1);
}
