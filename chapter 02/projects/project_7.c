/* Name: Project 7
 * Description: C Programming: A Modern Approach
 * Author: budzofficial
 */

#include <stdio.h>

#define BILL_1 20
#define BILL_2 10
#define BILL_3 5

int main(void) {
	int amount = 0, b_20 = 0, b_10 = 0, b_5 = 0, b_1 = 0;

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
