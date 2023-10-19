#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE_LENGTH 1024

/**
 * main - entry
 * @argc: argument count
 * @argv: argument value
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	FILE *file;
	char content[MAX_LINE_LENGTH];

	if (argc != 2)
	{
		printf("Usage: %s filename\n", argv[0]);
		return (1);
	}


	file = fopen(argv[1], "r");
	if (!file)
	{
		perror("Error opening file");
		return (1);
	}

	while (fgets(content, MAX_LINE_LENGTH, file))
	{
		printf("%s", content);
	}

	fclose(file);

	return (0);
}
