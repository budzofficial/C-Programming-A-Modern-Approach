/* Name: Project 6
 * Description: C Programming: A Modern Approach
 * Author: budzofficial
 */

#include <stdio.h>

int main(void)
{
	int d1 = 0, d2 = 0, d3 = 0, d4 = 0, d5 = 0, d6 = 0,
	    d7 = 0, d8 = 0, d9 = 0, d10 = 0, d11 = 0, d12 = 0,
	    total = 0, first_sum = 0, second_sum = 0;

	printf("Enter the first 12 digit of an EAN: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
			&d1, &d2, &d3, &d4, &d5, &d6,
			&d7, &d8, &d9, &d10, &d11, &d12);

	first_sum = d2 + d4 + d6 + d8 + d10 + d12;
	second_sum = d1 + d3 + d5 + d7 + d9 + d11;
	total = 3 * first_sum + second_sum;

	printf("Check digit: %d\n", 9 - ((total - 1) % 10));

	return 0;
}
