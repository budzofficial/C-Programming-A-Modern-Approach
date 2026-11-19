/* Name: Project 4
 * Description: C Programming: A Modern Approach
 * Author: budzofficial
 */

#include <stdio.h>

int main(void)
{
	int area_code = 0, central_office = 0, line_number = 0;

	printf("Enter phone number [(xxx) xxx-xxxx]: ");
	scanf("(%d) %d - %d", &area_code, &central_office, &line_number);

	printf("You entered %03d.%03d.%04d\n", area_code, central_office, line_number);

	return 0;
}
