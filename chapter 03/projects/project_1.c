/* Name: Project 1
 * Description: C Programming: A Modern Approach
 * Author: budzofficial
 */

#include <stdio.h>

int main(void)
{
	int month = 0, day = 0, year = 0;

	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%d / %d / %d", &month, &day, &year);

	printf("You entered the date %04d%02d%02d\n", year, month, day);

	return 0;
}
