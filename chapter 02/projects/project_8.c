/* Name: Project 8
 * Description: C Programming: A Modern Approach
 * Author: budzofficial
 */

#include <stdio.h>

#define PERCENTAGE 100.0
#define MONTHLY_INTEREST_RATE 12.0

int main(void) {
	double loan_amount = 0, interest_rate = 0, monthly_payment = 0, monthly_interest_rate = 0, balance = 0;

	printf("Enter amount of loan: ");
	scanf("%lf", &loan_amount);

	printf("Enter interest rate: ");
	scanf("%lf", &interest_rate);

	printf("Enter monthly payment: ");
	scanf("%lf", &monthly_payment);

	monthly_interest_rate = (interest_rate / PERCENTAGE) / MONTHLY_INTEREST_RATE;

	balance = loan_amount + (loan_amount * monthly_interest_rate) - monthly_payment;
	printf("\nBalance remaining after first payment: $%.2f\n", balance);

	balance = balance + (balance * monthly_interest_rate) - monthly_payment;
	printf("Balance remaining after second payment: $%.2f\n", balance);

	balance = balance + (balance * monthly_interest_rate) - monthly_payment;
	printf("Balance remaining after third payment: $%.2f\n", balance);

	return 0;
}
