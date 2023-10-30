#include "main.h"

/**
 * read_textfile - Function reads a text file and prints the letters
 * @filename: filename.
 * @letters: Numbers of letters to be printed.
 *
 * Return: The numbers of letters printed. Returns 0, if it fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int maxx;
	ssize_t rot, not;
	char *buf;

	if (!filename)
		return (0);

	maxx = open(filename, O_RDONLY);

	if (maxx == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	not = read(maxx, buf, letters);
	rot = write(STDOUT_FILENO, buf, not);

	close(maxx);

	free(buf);

	return (not);
}

