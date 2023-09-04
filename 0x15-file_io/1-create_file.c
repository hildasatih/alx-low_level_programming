#include "main.h"
/**
 * create_file - this function creates a file.
 * @filename: pointer to the name of the created file
 * @text_content: pointer to a string*
 * Return: returns -1 If the function fails Otherwise  1.
 */
int create_file(const char *filename, char *text_content)
{
	int file_len = 0;
	int file_des;
	int file_w;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (file_len = 0; text_content[file_len];)
			file_len++;
	}

	file_des = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	file_w = write(file_des, text_content, file_len);

	if (file_des == -1 || file_w == -1)
		return (-1);

	close(file_des);

	return (1);
}
