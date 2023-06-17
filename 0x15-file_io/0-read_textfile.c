#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output
 * @filename: file name
 * @letters: number of letters to read and print
 * Return: NULL if fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;
	char *buff;

	if (filename == NULL)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	op = open(filename, O_RDONLY);
	rd = read(op, buff, letters);
	wr = write(STDOUT_FILENO, buff, rd);

	if (op == -1 || rd == -1 || wr == -1 || w != r)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(op);

	return (wr);
}
