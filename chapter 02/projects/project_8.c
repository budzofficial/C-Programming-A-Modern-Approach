/* Name: Project 8
 * Description:
 * Write a program that calculates the remaining balance on a loan after
 * the first, second, third monthly payments.
 *
 * Display each balance with two digits after the decimal point. 
 * Hint: Each month, the balance is decreased by the amount of the pay-
 * ment, but increased by the balance times the monthly interest rate.
 * To find the monthly interest rate, convert the interest rate entered
 * by the user to a percentage and divide it by 12.
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
