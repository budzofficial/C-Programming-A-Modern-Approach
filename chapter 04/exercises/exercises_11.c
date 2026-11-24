/* Name: Exercises 11
 * Description: C Programming: A Modern Approach
 * Author: budzofficial
 */

#include <stdio.h>

int main(void)
{
	int i = 0, j = 0, k = 0;
	
	// A
	i = 1;

	/* Output:
	 *	(a): 0
	 *	(a): 2
	 */
	printf("(a): %d\n", i++ - 1);
	printf("(a): %d\n", i);

	// B
	i = 10;
	j = 5;
	
	/* Output:
	 *	(b): 4
	 *	(b): 11 6
	 */
	printf("(b): %d\n", i++ - ++j);
	printf("(b): %d %d\n", i, j);

	// C
	i = 7;
	j = 8;

	/* Output:
	 *	(c): 0
	 *	(c): 8 7
	 */
	printf("(c): %d\n", i++ - --j);
	printf("(c): %d %d\n", i, j);

	// D
	i = 3;
	j = 4;
	k = 5;

	/* Output:
	 *	(d): 3
	 *	(d): 4 5 4
	 */
	printf("(d): %d\n", i++ - j++ + --k);
	printf("(d): %d %d %d\n", i, j, k);

	return 0;
}
