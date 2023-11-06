#ifndef DOG_STRUCT_H
#define DOG_STRUCT_H

#include <stdio.h>

/**
 * struct dog - Define a dog structure
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Description: This structure defines a dog with a name, age, and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
}
;

/**
 * main - Entry point of the program.
 *
 * Description: This function demonstrates
 * the usage of the 'struct dog' structure.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	struct dog myDog;

	myDog.name = "Fido";
	myDog.age = 3.5;
	myDog.owner = "John Smith";

	printf("Name: %s\n", myDog.name);
	printf("Age: %.2f\n", myDog.age);
	printf("Owner: %s\n", myDog.owner);

	return (0);
}

#endif /* DOG_STRUCT_H */
