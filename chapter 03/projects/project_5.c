/* Name: Project 5
 * Description: C Programming: A Modern Approach
 * Author: budzofficial
 */

#include <stdio.h>

int main(void)
{
	int num_1 = 0, num_2 = 0, num_3 = 0, num_4 = 0, num_5 = 0;
	int num_6 = 0, num_7 = 0, num_8 = 0, num_9 = 0, num_10 = 0;
	int num_11 = 0, num_12 = 0, num_13 = 0, num_14 = 0, num_15 = 0;
	int num_16 = 0;

	printf("Enter the numbers from 1 to 16 in any order: ");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
			&num_1, &num_2, &num_3, &num_4, &num_5,
			&num_6, &num_7, &num_8, &num_9, &num_10,
			&num_11, &num_12, &num_13, &num_14, &num_15,
			&num_16);

	printf("\n%4d %4d %4d %4d\n", num_1, num_2, num_3, num_4);
	printf("%4d %4d %4d %4d\n", num_5, num_6, num_7, num_8);
	printf("%4d %4d %4d %4d\n", num_9, num_10, num_11, num_12);
	printf("%4d %4d %4d %4d\n", num_13, num_14, num_15, num_16);

	printf("\nRow sums: %d %d %d %d\n",
			num_1 + num_2 + num_3 + num_4,
			num_5 + num_6 + num_7 + num_8,
			num_9 + num_10 + num_11 + num_12,
			num_13 + num_14 + num_15 + num_16);

	printf("Column sums: %d %d %d %d\n",
			num_1 + num_5 + num_9 + num_13,
			num_2 + num_6 + num_10 + num_14,
			num_3 + num_7 + num_11 + num_15,
			num_4 + num_8 + num_12 + num_16);
	
	printf("Diagonal sums: %d %d\n",
			num_1 + num_6 + num_11 + num_16,
			num_4 + num_7 + num_10 + num_13);

	return 0;
}
