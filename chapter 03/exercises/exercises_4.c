/* Name: Exercises 4
 * Description: C Programming: A Modern Approach
 * Author: budzofficial
 */

#include <stdio.h>

int main(void)
{
	int i = 0, j = 0;
	float x = 0.0f;

	printf("Enter a number: ");
	scanf("%d%f%d", &i, &x, &j);

	/* Output:
	 *	10 0.300000 5
	 * 1. Scanf reads 10 and see a decimal so it stops put 10 to i.
	 * 2. Scanf see the decimal before so it grabs it and read 3
	 * after 3 it see a white-space it stops put .3 to x.
	 * 3. Scanf see a space it automatically skip it see 5 and see
	 * white-space it stops put 5 to j.
	 *
	 * NOTE: 6 was left into the input buffer. Also scanf is a 
	 * single function call. I simplify the explanation step-by-
	 * step from 1 to 3.
	 */
	printf("%d %f %d", i, x, j);

	return 0;
}
