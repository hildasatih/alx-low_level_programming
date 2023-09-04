#include "main.h"
/**
 * append_text_to_file - this is to appends texts at the end of a file.
 * @filename: A pointer to the appended file.
 * @text_content: added string at the end of the file.
 *
 * Return: returns -1 if filename is NULL Otherwise 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_des, file_w, file_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (file_len = 0; text_content[file_len];)
			file_len++;
	}

	file_des = open(filename, O_WRONLY | O_APPEND);
	file_w = write(file_des, text_content, file_len);

	if (file_des == -1 || file_w == -1)
		return (-1);

	close(file_des);

	return (1);
}
