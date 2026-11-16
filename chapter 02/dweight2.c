/* Name: Dweight2 Program
 * Description: C Programming: A Modern Approach
 * Author: budzofficial
 */

#include <stdio.h>

int main(void)
{
	int height = 0, length = 0, width = 0, volume = 0, weight = 0;

	printf("Enter a height of a box: ");
	scanf("%d", &height);
	printf("Enter a length of a box: ");
	scanf("%d", &length);
	printf("Enter a width of a box: ");
	scanf("%d", &width);

	volume = height * length * width;
	weight = (volume + 165) / 166;

	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimensional weight (pounds): %d\n", weight);

	return 0;
}
