#include "holberton.h"
/**
 * create_file - creates a file
 * @filename: file name
 * @text_content: string to append to file
 *
 * Return: 1 if success, -1 if failure
 */
int create_file(const char *filename, char *text_content)
{
	register int filde;
	register int write_bytes;
	register int iter;

	if (!filename)
		return (-1);
	filde = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (filde == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[iter])
			iter++;
		write_bytes = write(filde, text_content, iter);
		if (write_bytes == -1)
			return (-1);
	}
	close(filde);
	return (1);
}
