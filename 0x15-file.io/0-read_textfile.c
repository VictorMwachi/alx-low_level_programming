#include "main.h"
/**
 * read_textfile - reads textfile and prints to the POSIX standard output
 * @filename: file ponter
 * letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t rdf, wrtf;

	if (!filename)
		return (0);
	fd = open(filename | O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	rdf = read(fd, buf,letters);
	wrtf = write(STDOUT_FILE_NO, buf, rdf);
	close (fd);
	free (buf);
	return (wrtf);
}
