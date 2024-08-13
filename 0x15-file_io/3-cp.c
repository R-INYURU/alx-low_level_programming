#include "main.h"

/**
 * main - check the code
 * @ac: number of arguments
 * @av: string arguments details
 *
 * Return: always 0
 */
int main(int ac, char **av)
{
	ssize_t fd1, fd2, read_rtn, bite = 1024;
	char *buff;
	int fd_close1, fd_close2;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(av[1], O_RDONLY);
	if (!av[1] || fd1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd2 = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd2 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	buff = malloc(sizeof(char *) * bite);
	if (!buff)
		return (-1);
	read_rtn = read(fd1, buff, bite);
	write(fd2, buff, read_rtn);

	fd_close1 = close(fd1);
	fd_close2 = close(fd2);
	if (fd_close1 == -1 || fd_close2 == -1)
	{
		dprintf(2, "Error: Can't close %d\n", fd_close1);
		exit(100);
	}

	free(buff);
	return (0);
}
