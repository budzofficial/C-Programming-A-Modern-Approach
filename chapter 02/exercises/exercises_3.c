/* Name: Dweight Program (Exercises 3)
 * Description:
 * Condense the dweight.c program by (1) replacing the assignments
 * to height, length and width with initializers and (2) removing
 * the weight variable, instead calculating (volume + 165) / 166 within
 * the last printf.
 * Author: budzofficial
 */

#include <stdio.h>

#define VOLUME 166
#define ROUND_UP 165

int main(void)
{
	int height = 8, length = 12, width = 10, volume = 0;

	volume = height * length * width;

	printf("Dimensions: %dx%dx%d\n", length, width, height);
	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimensional weight (pounds): %d\n", (volume + ROUND_UP) / VOLUME);

	return 0;
}
