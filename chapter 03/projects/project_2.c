/* Name: Project 2
 * Description: C Programming: A Modern Approach
 * Author: budzosfficial
 */

#include <stdio.h>

int main(void)
{
	int item_number = 0, month = 0, day = 0, year = 0;
	float unit_price = 0.0f;

	// Item number
	printf("Enter item number: ");
	scanf("%d", &item_number);
	// Unit price
	printf("Enter unit price: ");
	scanf("%f", &unit_price);
	// Date
	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d / %d / %d", &month, &day, &year);

	printf("\nItem\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");
	printf("%d\t\t$%7.2f\t%02d/%02d/%04d\n", item_number, unit_price, month, day, year);

	return 0;
}
