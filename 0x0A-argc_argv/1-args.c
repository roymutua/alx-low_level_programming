#include <stdio.h>
/**
 * main - prints the number of arguments.
 * @argc: argument count
 * @argv: Argument vector for values
 *
 * Return: Always (0)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
