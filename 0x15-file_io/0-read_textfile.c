#include "main.h"

/**
 * read_textfile - reading the file from a recource
 * @letters: this is a variable pointer
 * @filename: this is a pointer
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(f, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(f);

	free(buf);

	return (nwr);
}
