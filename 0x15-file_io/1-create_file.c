#include "holberton.h"
/**
 * _strlen - finds thelength of string
 * @str: string
 *
 * Return: length of string
 */
int _strlen(char *str)
{
	int iter = 0;

	while (str[iter])
		iter++;
	return (iter);
}
/**
 * create_file - creates a file
 * @filename: file name
 * @text_content: string to append to file
 * Return: 1 if success, -1 if failure
 */
int create_file(const char *filename, char *text_content)
{
	int filde;
	ssize_t write_bytes = 0, length = _strlen(text_content);

	if (!filename)
		return (-1);
	filde = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (filde == -1)
		return (-1);
	if (length)
		write_bytes = write(filde, text_content, length);
	close(filde);
	return (write_bytes == length ? 1 : -1);
}
