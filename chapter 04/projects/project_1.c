/* Name: Project 1
 * Description: C Programming: A Modern Approach
 * Author: budzofficial
 */

#include <stdio.h>

#define BASE 10

int main(void)
{
	int n = 0;

	printf("Enter a two-digit number: ");
	scanf("%d", &n);

	printf("The reversal is: %d%d\n", n % BASE, n / BASE);

	return 0;
}
