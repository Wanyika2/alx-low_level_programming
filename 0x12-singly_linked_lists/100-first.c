#include <stdio.h>

/* Function to print the message before main */
void pre_main_message(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

int main(void)
{
	/* Call the pre_main_message function before executing main */
	pre_main_message();

	/* Rest of your main function */
	printf("This is the main function.\n");

	return 0;
}
