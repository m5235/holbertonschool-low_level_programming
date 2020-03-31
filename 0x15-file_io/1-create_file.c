#include "holberton.h"
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 *create_file - Create a function that creates a file
 *@filename: filename
 *@text_content: data of file name
 *Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)

{
	int fd, i;
	ssize_t writer;

	if (filename == NULL)
	return (-1);
	if (text_content == NULL)
		return (1);

fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 600);
if (fd == -1)
return (-1);

for (i = 0; text_content[i]; i++)

writer = write(fd, text_content, i);
if ((writer == -1) || (writer != i))
{
return (-1);
}

return (1);

}
