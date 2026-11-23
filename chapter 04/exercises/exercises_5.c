/* Name: Exercises 5
 * Description: C Programming: A Modern Approach
 * Author: budzofficial
 */

#include <stdio.h>

#define A (8 % 5)
#define B (-8 % 5)
#define C (8 % -5)
#define D (-8 % -5)

int main(void)
{
	/* Output:
	 *	(a): 3
	 *	(b): -3 or 2
	 *	(c): 3 or -2
	 *	(d): -3 or 2
	 *
	 * NOTE: Compiled with cc -O3 -std=c89 -Wall -Wextra -Werror
	 * -pedantic -o exercises_5 exercises_5.c
	 */
	printf("(a): %d\n", A);
	printf("(b): %d\n", B);
	printf("(c): %d\n", C);
	printf("(d): %d\n", D);

	return 0;
}
