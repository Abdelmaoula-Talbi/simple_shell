#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


/**
 * main - Entry point
 *
 * Return: Nothing.
 */
int main(void)
{
	char *line, *prompt = "our_sh >> ";
	char **tokens;

	for (;;)
	{
		/*handling the EOF signal here*/
		write(STDOUT_FILENO, prompt, 10);
		line = read_input();
		tokens = split_input(line);
		if (tokens[0] != NULL)
		{
			execute_command(tokens);
		}
		free(line);
		free(tokens);
	}
	return (0);
}
