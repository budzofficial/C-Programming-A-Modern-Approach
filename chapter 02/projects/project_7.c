/* Name: Project 7
 * Description:
 * Write a program that asks the user to enter a U.S. Dollar amount and
 * then shows how to pay that amount using the smallest number of
 * $20, $10, $55 and $1 bills.
 * Hint: Divide the amount by 20 to determine the number of $20 bills
 * needed, and then reduce the amount by the total value of the $20 
 * bills. Repeat for the other bill sizes. Be sure to use integer values
 * throughout, not floating-point numbers.
 * Author: budzofficial
 */

#include <stdio.h>

#define BILL_1 20
#define BILL_2 10
#define BILL_3 5

int main(void) {
	int amount, b_20, b_10, b_5, b_1;

	printf("Enter a dollar amount: ");
	scanf("%d", &amount);

	b_20 = amount / BILL_1;
	amount = amount % BILL_1;

	b_10 = amount / BILL_2;
	amount = amount % BILL_2;

	b_5 = amount / BILL_3;
	amount = amount % BILL_3;

	b_1 = amount;

	printf("$20 bills: %d\n", b_20);
	printf("$10 bills: %d\n", b_10);
	printf(" $5 bills: %d\n", b_5);
	printf(" $1 bills: %d\n", b_1);

	return 0;
}
