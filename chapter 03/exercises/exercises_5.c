/* Name: Exercises 5
 * Description: C Programming: A Modern Approach
 * Author: budzofficial
 */

#include <stdio.h>

int main(void)
{
	int i = 0;
	float x = 0.0f, y = 0.0f;

	printf("Enter a number: ");
	scanf("%f%d%f", &x, &i, &y);

	/* Output:
	 *	12.300000 45 0.600000
	 * 1. Scanf read the input buffer 12.3 45.6 789
	 * 2. Scanf see 12.3 then see a white-space it stops put 12.3
	 * to x.
	 * 3. Scanf see white-space before it skips and read 45 and see
	 * a decimal so it stops put 45 to i.
	 * 4. Scanf see decimal before and read 6 see a white-space it
	 * stops put .6 to y.
	 *
	 * NOTE: 789 is left into the input buffer. Also scanf is a
	 * single scanf function call my explanation was simplified
	 * step-by-step so we get 4 steps.
	 */
	printf("%f %d %f", x, i, y);

	return 0;
}
