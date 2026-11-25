/* Name: Project 2
 * Description: C Programming: A Modern Approach
 * Author: budzofficial
 */

#include <stdio.h>

#define BASE 10
#define HUNDREDS 100

int main(void)
{
	int n = 0;

	printf("Enter a three-digit number: ");
	scanf("%d", &n);

	printf("The reversal is: %d%d%d\n",
			n % BASE, (n / BASE) % BASE, n / HUNDREDS);

	return 0;
}
