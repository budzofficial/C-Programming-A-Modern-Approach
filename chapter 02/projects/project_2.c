/* Name: Project 2
 * Description: C Programming: A Modern Approach
 * Author: budzofficial
 */

#include <math.h>
#include <stdio.h>

#define FRACTION (4.0f / 3.0f) // 4 / 3 result 1 because of truncation

int main(void)
{
	int radius = 10;
	float v = 0.0f;

	v = FRACTION * M_PI * radius * radius * radius;

	printf("Volume of sphere: %.2f\n", v);

	return 0;
}
