#include "holberton.h"

/**
 *create_file - Create a function that creates a file
 *@filename: filename
 *@text_content: data of file name
 *Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)

{
	int i;
	ssize_t writer, fd;

	if (filename == NULL)
	return (-1);
	if (text_content == NULL)
		return (1);

fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (fd == -1)
return (-1);

while (text_content[i])
i++;
writer = write(fd, text_content, i);
if (writer < 0)
{
return (-1);
}

return (1);

}
