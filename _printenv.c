#include "shell.h"

/**
 * _printenv - prints the environment using environ
 *
 * Return: 0 on success
 */
int _printenv(void)
{
int i = 0;

while (environ[i] != NULL)
{
printf("%s\n", environ[i]);
i++;
}
return (0);
}
