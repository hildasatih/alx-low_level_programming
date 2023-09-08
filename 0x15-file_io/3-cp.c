#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int f_des);

/**
 * create_buffer - it allocates 1024 bytes to a buffer.
 * @file: the file buffer is storing chars for.
 *
 * Return: pointer to the new buffer.
 */
char *create_buffer(char *file)
{
	char *bfer;

	bfer = malloc(sizeof(char) * 1024);

	if (bfer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (bfer);
}

/**
 * close_file - this closes the file descriptor.
 * @f_des: file descriptor to be closed.
 */
void close_file(int f_des)
{
	int x;

	x = close(f_des);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close f_des %d\n", f_des);
		exit(100);
	}
}

/**
 * main - Copies a file content into another file.
 * @argc: number of arguments supplied to the program.
 * @argv: array of pointers to arguments.
 *
 * Return: returns 0 on success.
 *
 * Description: If argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If both file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *bfer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	bfer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, bfer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(bfer);
			exit(98);
		}

		w = write(to, bfer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(bfer);
			exit(99);
		}

		r = read(from, bfer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(bfer);
	close_file(from);
	close_file(to);

	return (0);
}

