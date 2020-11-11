#include "holberton.h"
/**
 * _strlen - finds the length of a string
 * @str: string
 *
 * Return: length of a string
 */
int _strlen(char *str)
{
	int iter = 0;

	while (str[iter])
		iter++;
	return (iter);
}
/**
 * append_text_to_file - appends text to a file
 * @filename: pointer to file name
 * @text_content: text
 *
 * Return: 1 if success, 0 if failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filde;
	ssize app_byte = 0, length = _strlen(text_content);

	if (!filename)
		return (-1);
	filde = open(filename, O_WRONLY | O_APPEND);
	if (filde == -1)
		return (-1);
	if (length)
		app_bytes = write(filde, text_content, length);
	close(filde);
	return (app_bytes == length ? 1 : -1);
}
