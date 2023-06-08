#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the product of two numbers
 * @argc: number of arguments
 * @argv: pointer to array of arguments passed
 * Return: 0 (success) -1 (Error)
 */
int main(int argc, char *argv[])
{
	int a, b, sum;

	if (argc != 3)
	{
	printf("Error \n");
	return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	sum = a * b;

	printf("%d \n", sum);
	return (0);
}
