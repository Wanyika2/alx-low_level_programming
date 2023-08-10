#include <stdio.h>
/**
 * main - A program that prints size of various types on the computer
 * Return: 0 (Success);
 */
int main(void)
{
char a;
int 1;
long int 2;
long long int 3;
float 19.99;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int:%lu byte(s)\n", (unsigned long)sizeof(1));
printf("Size of a long int %lu byte(s)\n", (unsigned long)sizeof(2));
printf("Size of a long long int:%lu byte(s)\n", (unsigned long)sizeof(3));
printf("Size of a float:%lu byte(s)\n", (unsigned long)sizeof(19.99));
return (0);
}

