#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - prints the name of the program
 *@argc: argument count
 *@argv: argument vector
 *Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int sum;
	int i;

	if (argc == 1) {
	printf("0\n");
	return 0;
	}

	sum = 0;

	for (i = 1; i < argc; i++) {
	int num = 0;
	int j = 0;
	char c;

	while ((c = argv[i][j]) != '\0') {
	if (!isdigit(c)) {
	printf("Error\n");
	return 1;
	}
	num = num * 10 + (c - '0');
	j++;
	}

	sum += num;
	}

	printf("%d\n", sum);
	return 0;
}
