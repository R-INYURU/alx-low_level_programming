#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: String to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0;
	ssize_t wrt_rtn;
	size_t count = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)
		return (-1);

	while (text_content[i])
	{
		count++;
		i++;
	}
	wrt_rtn = write(fd, text_content, count);
	if (wrt_rtn == -1)
		return (-1);

	close(fd);

	return (1);
}
