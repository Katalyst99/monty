#include "monty.h"

/**
 * main - Entry point for monty program
 * @argc: number of arguments
 * @argv: pointer to array of arguments
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	char *buff = NULL, *tkn = NULL;
	stack_t *head = NULL;
	File *fd;
	size_t line_len = 0;
	unsigned int line_number = 0;
	ssize_t read_c;

	if (argc != 2)
	{
		fprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	fd = fopen(argv[1], "r");
	if (fd == NULL)
	{
		fprintf("Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
}
