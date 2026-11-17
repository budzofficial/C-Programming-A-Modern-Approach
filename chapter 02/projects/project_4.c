/* Name: Project 4
 * Description: C Programming: A Modern Approach
 * Author: budzofficial
 */

#include <stdio.h>

#define TAX 0.05

int main(void)
{
	double amount = 0, total = 0;

	printf("Enter an amount: ");
	scanf("%lf", &amount);

	total = amount + (amount * TAX);

	printf("With tax added: $%.2f\n", total);

	return 0;
}
