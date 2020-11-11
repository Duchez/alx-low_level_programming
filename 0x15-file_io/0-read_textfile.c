#include "holberton.h"
/**
 * read_textfile - reads text from a file
 * @filename: file name
 * @letters: number of bytes
 *
 * Return: number of read bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filde;
	ssize_t read_bytes;
	char buffer[BUFF * 8];

	if (!filename || !letters)
		return (0);
	filde = open(filename, O_RDONLY);
	if (filde == -1)
		return (0);
	read_bytes = read(filde, &buffer[0], letters);
	read_bytes = write(STDOUT_FILENO, &buffer[0], read_bytes);
	close(filde);
	return (read_bytes);
}
