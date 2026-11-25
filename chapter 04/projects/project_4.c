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

	digit_5 = n % 8;
	n /= 8;
	digit_4 = n % 8;
	n /= 8;
	digit_3 = n % 8;
	n /= 8;
	digit_2 = n % 8;
	n /= 8;
	digit_1 = n;

	printf("In octal, your number is: %d%d%d%d%d\n",
			digit_1, digit_2, digit_3, digit_4, digit_5);

	return 0;
}
