#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * split_input - split input into multiple arguments.
 * @input: string entered in the stdin.
 * Return: the arguments of the string splitted.
 */
char **split_input(char *input)
{
	char *token;
	char **tokens = NULL;
	int index = 0;

	token = strtok(input, " ");
	while (token != NULL)
	{
		token = strtok(NULL, " ");
		index++;
	}
	tokens = malloc(sizeof(char*) * index);
	tokens[index] = token;
	return (tokens);
}
