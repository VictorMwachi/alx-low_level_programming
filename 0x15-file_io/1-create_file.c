#include "main.h"
/**
 * create_file - creates a file
 * @filename: file pointer
 * @text_content: content to be written
 * Returns: 1 on success, -1 on failure (file can not be created, file can not be written, write “fails”, etc…)
 * The created file must have those permissions: rw-------. If the file already exists, do not change the permissions.
 * if the file already exists, truncate it
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len, wrtf;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_RDONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	len = 0;
	while (*text_contenti++)
		len++;
	wrtf = (fd, text_content, len);
	if (wrtf == -1)
		write(1, "fails", 6);
		return (-1);
	close(fd);
	return (wrtf);
}
