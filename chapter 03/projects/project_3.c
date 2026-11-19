/* Name: Project 3
 * Description: C Programming: A Modern Approach
 * Author: budzofficial
 */

#include <stdio.h>

int main(void)
{
	int gs1_prefix = 0, group_identifier = 0, publisher_code = 0;
	int item_number = 0, check_digit = 0;

	printf("Enter ISBN: ");
	scanf("%d - %d - %d - %d - %d", &gs1_prefix, &group_identifier, &publisher_code, &item_number, &check_digit);

	printf("GS1 prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d\n", gs1_prefix, group_identifier, publisher_code, item_number, check_digit);

	return 0;
}
