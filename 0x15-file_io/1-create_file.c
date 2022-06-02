#include "main.h"
/**
 * create_file - creates a file
 * @filename: file pointer
 * @text_content: content to be written
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 * The created file must have those permissions: rw-------.
 * If the file already exists, do not change the permissions.
 * if the file already exists, truncate it
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len, wrtf;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	len = 0;
	if (text_content != NULL)
	{
	while (*text_content++)
	{
		if (*text_content !='\0')
			len++;
	}
	}
	else
		text_content ="";
	wrtf = write(fd, text_content, len);
	if (wrtf == -1)
	{
		write(1, "fails", 6);
		return (-1);
	}
	close(fd);
	return (1);
}
