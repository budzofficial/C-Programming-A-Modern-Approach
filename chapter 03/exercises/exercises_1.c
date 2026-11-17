/* Name: Exercises 1
 * Description: C Programming: A Modern Approach
 * WARNING: This answer is work in progress (WIP)
 * Author: budzofficial
 */

#include <stdio.h>

#define A1 86
#define A2 1040

int main(void)
{
	/* Output:
	 *      86, 1040
	 *
	 * %6d prints A1 (86) right-aligned in a minimum field width of 6.
	 * Since "86" is only 2 characters, printf pads it with 4 leading spaces.
	 *
	 * %4d prints A2 (1040) in a minimum field width of 4.
	 * Since "1040" is exactly 4 digits, no extra padding is added.
	 *
	 * NOTE: The literal space after the comma in the format string is
	 * printed as-is and does not count toward the %4d field width.
	 */
	printf("%6d, %4d\n", A1, A2);

	return 0;
}
