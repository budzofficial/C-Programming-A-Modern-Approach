/* Name: Exercises 3
 * Description: C Programming: A Modern Approach
 * Author: budzofficial
 */

#include <stdio.h>

#define A (8 / 5)
#define B (-8 / 5)
#define C (8 / -5)
#define D (-8 / -5)

int main(void)
{
	/* Output:
	 *	(a): 1
	 *	(b): -1
	 *	(c): -1
	 *	(d): 1
	 *
	 * NOTE: Compiled with cc -O3 -std=c89 -Wall -Wextra -Werror
	 * -pedantic -o exercises_3 exercises_3.c. Also the compiler
	 *  used on this is from termux which uses a modern compiler.
	 */
	printf("(a): %d\n", A);
	printf("(b): %d\n", B);
	printf("(c): %d\n", C);
	printf("(d): %d\n", D);

	return 0;
}
