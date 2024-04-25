#define _GNU_SOURCE

#include "shell.h"

/**
 * main - program that mimic a super simple shell)
 *
 * Return: 0
 */
int main(void)
{
	char *line = NULL;
	char *username = getlogin();
	char cwd[1024];
	char hostname[1024];

	while (1)
	{
		if (isatty(STDIN_FILENO) == 1)
		{
			if (username != NULL)
			{
				printf("%s@", username);
			}
			if (gethostname(hostname, sizeof(hostname)) != -1)
			{
				printf("%s:", hostname);
			}
			else
			{
				perror("gethostname() error");
				return EXIT_FAILURE;
			}
			if (getcwd(cwd, sizeof(cwd)) != NULL)
			{
				printf("%s ", cwd);
			}
			else
			{
				perror("getcwd() error");
				return EXIT_FAILURE;
			}
			printf("$ ");
			fflush(stdout);
		}

		line = read_line();
		split_line(line);
		free(line);
	}
	return (0);
}

/**
 * read_line - function to read the user inputs
 * @void
 *
 * Return: char
 */

char *read_line(void)
{
	char *line = NULL;
	ssize_t bytes_read;
	size_t buff_size = 0;

	bytes_read = getline(&line, &buff_size, stdin);
	if (bytes_read == EOF)
	{
		free(line);
		exit(0);
	}
	if (bytes_read > 0 && line[bytes_read - 1] == '\n')
		line[bytes_read - 1] = '\0';
	return (line);
}
