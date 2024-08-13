#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX std out
 * @filename: text file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd, write_rtn = 0, read_rtn = -1;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char *) * letters);
	if (!buff)
		return (0);

	read_rtn = read(fd, buff, letters);
	write_rtn = write(STDOUT_FILENO, buff, read_rtn);

	close(fd);
	free(buff);

	return (write_rtn);
}
