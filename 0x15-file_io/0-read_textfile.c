#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - Reads a text file and print it the to STDOUT.
 * @filename: text file to be read
 * @letters: number of letters to being read
 * Return: returns actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_des;
	ssize_t file_w;
	ssize_t file_r;
	char *buffer;

	file_des = open(filename, O_RDONLY);
	if (file_des == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	file_r = read(file_des, buffer, letters);
	file_w = write(STDOUT_FILENO, buffer, file_r);
	free(buffer);
	close(file_des);
	return (file_w);
}
