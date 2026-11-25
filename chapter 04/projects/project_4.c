/* Name: Project 4
 * Description: C Programming: A Modern Approach
 * Author: budzofficial
 */

#include <stdio.h>

int main(void)
{
	int n = 0, digit_1 = 0, digit_2 = 0, digit_3 = 0, digit_4 = 0,
	    digit_5 = 0;

	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &n);

	digit_5 = n % 8; // 244.125, 125 x 8 = 1000 remove 3 0's = 1
	n /= 8; // n becomes 244
	digit_4 = n % 8; // 244 / 8 = 30.5, 5 x 8 = 40 remove 0 = 4 
	n /= 8; // n becomes 30
	digit_3 = n % 8; // 30 / 8 = 3.75, 75 x 8 = 600 remove 0's = 6
	n /= 8; // n becomes 3
	digit_2 = n % 8; // 3 / 8 = 0.375, 375 x 8 = 3000 remove 0's = 3
	n /= 8; // 0
	digit_1 = n; // 0
				/* Output: 0 3 6 4 1 */
	printf("In octal, your number is: %d%d%d%d%d\n",
			digit_1, digit_2, digit_3, digit_4, digit_5);

	return 0;
}
