/* Name: Exercises 1
 * Description: C Programming: A Modern Approach
 * Author: budzofficial
 */

#include <stdio.h>

#define A1 86
#define A2 1040
#define B 30.253
#define C 83.162
#define D .0000009979
int main(void)
{
	/* Output:
	 *      86, 1040
	 *
	 * %6d prints A1 (86) right-aligned in a minimum field width
	 * of 6.
	 * Since "86" is only 2 characters, printf pads it with 4
	 * leading spaces.
	 *
	 * %4d prints A2 (1040) in a minimum field width of 4.
	 * Since "1040" is exactly 4 digits, no extra padding is added.
	 *
	 * NOTE: The literal space after the comma in the format string
	 * is printed as-is and does not count toward the %4d field
	 * width.
	 */
	printf("%6d, %4d\n", A1, A2);

	/* Output:
	 *	3.02530e+01
	 * %12 prints B (3.02530e+01) right-aligned in a minimum field
	 * of 12.
	 * Since "3.02530e+01" is only 11 characters, printf pads it
	 * with 1 leading space.
	 *
	 * After the decimal it prints 5 characters precision "02530".
	 */
	printf("%12.5e\n", B);

	/* Output:
	 *	83.1620
	 * %.4f prints C (83.1620) with 4 characters precision "1620".
	 * Since C only has 3 characters after the decimal it adds "0"
	 * to reach required 4 precision.
	 */
	printf("%.4f\n", C);

	/* Output:
	 *      1e-06
	 * %-6.2g prints D (1e-06) left-aligned in minimum field width
	 * of 6.
	 * Since "1e-06" is only 5 characters, printf pads it with 1
	 * space after it prints "1e-06" so we get "1e-06 ".
	 *
	 * NOTE: For %g, the .2 is NOT decimal places. It means 2
	 * significant digits (9.979e-7 rounds to 1.0e-6).
	 * %g also removes trailing zeros, which is why it prints
	 * "1e-06" instead of "1.0e-06".
	 */
	printf("%-6.2g\n", D);

	return 0;
}
