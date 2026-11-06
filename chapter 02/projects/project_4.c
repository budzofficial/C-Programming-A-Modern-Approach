/* Name: Project 4
 * Description: Write a program that asks the user to enter a dollar-
 * cents-amount, then display the amount with 5% tax added
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

	printf("Total amount with tax: $%.2f\n", total);

	return 0;
}
