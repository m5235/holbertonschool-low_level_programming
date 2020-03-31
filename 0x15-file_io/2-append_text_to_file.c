#include "holberton.h"

/**
 *append_text_to_file - append a function that creates a file
 *@filename: filename
 *@text_content: data of file name
 *Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)

{
	int i = 0;
	int writer, fd;

	if (filename == NULL)
	return (-1);
	if (text_content == NULL)
		return (1);

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
if (fd < 0)
		return (-1);
while (text_content[i])
i++;
writer = write(fd, text_content, i);
if (writer < 0)

return (-1);


return (1);

}
