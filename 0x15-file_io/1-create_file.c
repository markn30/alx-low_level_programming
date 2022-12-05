#include "main.h"

/**
* create_file - creates a file
*
* @filename: name of file to be created
* @text_content: NULL terminated string to write to the file
*
* Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int fd;

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
	{
		return (-1);
	}
	else
	{
		if (text_content != NULL)
		{
			int strln = strlen(text_content);

			write(fd, text_content, strln);
		}

		close(fd);
	}

	return (1);
}
