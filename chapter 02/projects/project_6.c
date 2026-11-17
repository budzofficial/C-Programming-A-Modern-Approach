/* Name: Project 6
 * Description: C Programming: A Modern Approach
 * Author: budzofficial
 */

#include <stdio.h>

int main(void)
{
	int x = 0, polynomial = 0;

	printf("Enter a value of x: ");
	scanf("%d", &x);

	polynomial = (((( 3 * x + 2 ) * x - 5 ) * x - 1 ) * x + 7 ) * x - 6;

	printf("Polynomial: %d\n", polynomial);

	return 0;
}
