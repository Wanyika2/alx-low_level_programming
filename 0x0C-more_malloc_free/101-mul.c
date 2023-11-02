#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - Check if a string contains only digits.
 * @str: The string to check.
 *
 * Return: 1 if all characters are digits, 0 otherwise.
 */
int is_digit(char *str)
{
	while (*str)
	{
	if (*str < '0' || *str > '9')
	return (0);
	str++;
	}
	return (1);
}

/**
 * multiply - Multiply two positive numbers.
 * @num1: The first positive number.
 * @num2: The second positive number.
 *
 * Return: The product of num1 and num2.
 */
int multiply(int num1, int num2)
{
	return num1 * num2;
}

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;

	if (argc != 3)
	{
	printf("Error\n");
	return (98);
	}

	if (!is_digit(argv[1]) || !is_digit(argv[2]))
	{
	printf("Error\n");
	return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = multiply(num1, num2);

	printf("%d\n", result);
	return (0);
}
