#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


/**
 * main - Entry point
 *
 * Return: Nothing.
 */
int main(void)/*(int argc __attribute__((unused)), char **argv __attribute__((unused)))*/
{
	char *line, *prompt = ">> ";
	char **tokens;

	for (;;)
	{
		/*handling the EOF signal here*/
		write(STDOUT_FILENO, prompt, 3);
		line = read_input();
		tokens = split_input(line);
		if (tokens[0] != NULL)
		{
			execute_command(tokens);
		}
		
		free (line);
		free (tokens);
	}
	return (0);
}
