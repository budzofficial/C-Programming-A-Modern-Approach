/* Name: Exercises 1
 * Description: C Programming: A Modern Approach
 * Author: budzofficial
 */

#include <stdio.h>

int main(void)
{
	int i = 0, j = 0, k = 0;

	// A
	i = 2;
	j = 3;
	k = (i * j) == 6;

	/* Output:
	 *	1
	 */
	printf("%d\n", k);

	// B
	i = 5;
	j = 10;
	k = 1;
	
	/* Output:
	 *	1
	 */
	printf("%d\n", (k > i) < j);

	// C
	i = 3;
	j = 2;
	k = 1;

	/* Output:
	 *	1
	 */
	printf("%d\n", (i < j) == (j < k));

	// D
	i = 3;
	j = 4;
	k = 5;

	/* Output:
	 *	0
	 */
	printf("%d\n", ((i % j) + i) < k);


	return 0;
}
