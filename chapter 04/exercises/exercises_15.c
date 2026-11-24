/* Name: Exercises 15
 * Description: C Programming: A Modern Approach
 * Author: budzofficial
 */

#include <stdio.h>

int main(void)
{
	int i = 1, j = 2;

	i += j;

	/* Output:
	 *	(a): 3 2
	 *	(b): 0 2
	 *	(c): 1 2
	 *	(d): 1 3
	 */
	printf("(a): %d %d\n", i, j);

	i = 1;
	j = 2;
	i--;

	printf("(b): %d %d\n", i, j);

	i = 1;
	j = 2;
	(void)(i * j / i);

	printf("(c): %d %d\n", i, j);

	i = 1;
	j = 2;
	(void)(i % ++j);

	printf("(d): %d %d\n", i, j);

	return 0;
}
