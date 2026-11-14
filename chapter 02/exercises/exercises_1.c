/* Name: Hello World Program (Exercises 1)
 * Description:
 * Create and run Kernighan and Ritchie's famous "hello, world" program.
 *
 * Question:
 * Do you get a warning message from the compiler? if so
 * what's needed to make it go away?
 *
 * Answer:
 * With -std=c89 -pedantic, the compiler warns that main's
 * implicit "return 0" is a c99 extension. Adding "return 0;" at the
 * end of main removes the warning.
 * Author: budzofficial
 */

#include <stdio.h>

int main(void)
{
	printf("hello, world\n");

	return 0;
}
