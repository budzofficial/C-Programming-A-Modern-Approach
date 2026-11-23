/* Name: Exercises 6
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
	 *	(b): -3
	 *	(c): 3
	 *	(d): -3
	 *
	 * NOTE: Compiled with cc -O3 -std=c99 -Wall -Wextra -Werror
	 * -pedantic -o exercises_6 exercises_6.c
	 */
	printf("(a): %d\n", A);
	printf("(b): %d\n", B);
	printf("(c): %d\n", C);
	printf("(d): %d\n", D);

	return 0;
}
