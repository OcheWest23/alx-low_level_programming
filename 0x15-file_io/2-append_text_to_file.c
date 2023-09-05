#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the file does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int maxlen;
	int mwm;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (maxlen = 0; text_content[maxlen]; maxlen++)
			;
		mwm = write(fd, text_content, maxlen);

		if (mwm == -1)
			return (-1);
	}

	close(fd);

	return (1);
}

