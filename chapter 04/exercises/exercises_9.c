/* Name: Exercises 9
 * Description: C Programming: A Modern Approach
 * Author: budzofficial
 */

#include <stdio.h>

int main(void)
{
	// A
	int i = 0, j = 0, k = 0;

	i = 7;
	j = 8;

	i *= j + 1;

	/* Output:
	 *	(a): 63 8
	 */
	printf("(a): %d %d\n", i, j);

	// B
	i = j = k = 1;
	i += j += k;

	/* Output:
	 *	(b): 3 2 1
	 */
	printf("(b): %d %d %d\n", i, j, k);

	// C
	i = 1;
	j = 2;
	k = 3;
	i -= j -= k;

	/* Output:
	 *	(c): 2 -1 3
	 */
	printf("(c): %d %d %d\n", i, j, k);

	// D
	i = 2;
	j = 1;
	k = 0;
	i *= j *= k;

	/* Output:
	 *	(d): 0 0 0
	 */
	printf("(d): %d %d %d\n", i, j, k);

	return 0;
}
