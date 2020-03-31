#include "holberton.h"
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 *read_textfile - reads a text file and prints it to the POSIX standard output
 *@filename: file name
 *@letters: leterrs
 *Return:   the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)

{
int fd;
ssize_t m_read;
ssize_t m_write;
char *ptr;
if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
ptr = malloc(letters * (sizeof(char)));
if (ptr == NULL)
	return (0);

m_read = read(fd, ptr, letters);

if (m_read == -1)
{
	close(fd);
	free(ptr);
	return (0);
}
m_write = write(STDOUT_FILENO, ptr, letters);
if (m_write == -1)
{
close(fd);
free(ptr);
	return (0);
}
free(ptr);
return (m_read);
}