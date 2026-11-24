/* Name: Exercises 12
 * Description: C Programming: A Modern Approach
 * Author: budzofficial
 */

#include <stdio.h>

int main(void)
{
	int i = 0, j = 0;

	// A
	i = 5;
	j = ++i * 3 - 2;

	/* Output:
	 * 	(a): 6 16
	 */
	printf("(a): %d %d\n", i, j);

	// B
	i = 5;
	j = 3 - 2 * i++;

	/* Output:
	 *	(b): 6 -7
	 */
	printf("(b): %d %d\n", i, j);

	// C
	i = 7;
	j = 3 * i-- + 2;

	/* Output:
	 *	(c): 6 23
	 */
	printf("(c): %d %d\n", i, j);

	// D
	i = 7;
	j = 3 + --i * 2;

	/* Output:
	 *	(d): 6 15
	 */
	printf("(d): %d %d\n", i, j);

	return 0;
}
