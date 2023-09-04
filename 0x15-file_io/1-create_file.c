#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: Points to the name of the file to be created.
 * @text_content: Points to a string to written to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int i, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	i = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(i, text_content, len);

	if (i == -1 || w == -1)
		return (-1);

	close(i);

	return (1);
}
