/* Name: Exercises 10
 * Description: C Programming: A Modern Approach
 * Author: budzofficial
 */

#include <stdio.h>

int main(void)
{
	int i = 0, j = 0;

	// A
	i = 6;
	j = i += i;

	/* Output:
	 *	(a): 12 12
	 */
	printf("(a): %d %d\n", i, j);

	// B
	i = 5;
	j = (i -= 2) + 1;

	/* Output:
	 *	(b): 3 4
	 */
	printf("(b): %d %d\n", i, j);

	// C
	i = 7;
	j = 6 + (i = 2.5);

	/* Output:
	 *	(c): 2 8
	 *
	 * WARNING: 2.5 will be truncated changes the value to 2.
	 */
	printf("(c): %d %d\n", i, j);

	// D
	i = 2;
	j = 8;
	j = (i = 6) + (j = 3);

	/* Output:
	 *	(d): 6 9
	 *
	 * WARNING: multiple unsequenced modification/changes to j.
	 */
	printf("(d): %d %d\n", i, j);

	return 0;
}
