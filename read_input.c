#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_input - reads input from stdin.
 *
 * Return: the string typed in stdin.
 */

char *read_input(void)
{
	char *line = NULL;
	size_t size = 60;
	char **line_p = &line;
	ssize_t input;

	input = getline(line_p, &size, stdin);
	if (input < 0)
	{
		perror("Error: ");
		exit(1);
	}
	return (line);
}
