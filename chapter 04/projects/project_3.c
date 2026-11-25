/* Name: Project 3
 * Description: C Programming: A Modern Approach
 * Author: budzofficial
 */

#include <stdio.h>

int main(void)
{
	int digit_1 = 0, digit_2 = 0, digit_3 = 0;

	printf("Enter a three-digit number: ");
	scanf("%1d%1d%1d", &digit_1, &digit_2, &digit_3);

	printf("The reversal is: %d%d%d\n",
			digit_3, digit_2, digit_3);

	return 0;
}
