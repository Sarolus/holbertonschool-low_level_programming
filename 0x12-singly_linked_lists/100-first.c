#include "lists.h"

void start(void) __attribute__ ((constructor));

/**
 * start - constructor function to print before main function.
 */
void start(void)
{
	char fast[] = "You're beat! and yet, you must allow,\n";
	char tortoise[] = "I bore my house upon my back!\n";

	printf("%s%s", fast, tortoise);
}
