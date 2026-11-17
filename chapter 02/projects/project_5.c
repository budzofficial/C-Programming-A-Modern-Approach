/* Name: Project 5
 * Description: C Programming: A Modern Approach
 * Author: budzofficial
 */

#include <stdio.h>

#define POLY1 3
#define POLY2 2
#define POLY3 5
#define POLY4 7
#define POLY5 6

int main(void)
{
	double x = 0, result = 0;

	printf("Enter a value of x: ");
	scanf("%lf", &x);

	double x2 = x * x;
	double x3 = x2 * x;
	double x4 = x3 * x;
	double x5 = x4 * x;

	result = (POLY1 * x5) + (POLY2 * x4) - (POLY3 * x3) - x2 + (POLY4 * x) - POLY5;

	printf("The value of polynomial is: %.2f\n", result);

	return 0;
}
