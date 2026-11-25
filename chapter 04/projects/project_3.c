/* Name: Project 3
 * Description: C Programming: A Modern Approach
 * Author: budzofficial
 */

#include <stdio.h>

int main(void)
{
	int num = 0, num_2 = 0, num_3 = 0;

	printf("Enter a three-digit number: ");
	scanf("%1d%1d%1d", &num, &num_2, &num_3);

	printf("The reversal is: %d%d%d\n", num_3, num_2, num);

	return 0;
}
