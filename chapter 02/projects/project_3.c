/* Name: Project 3
 * Description: Modify the program of Programming Project 2 so that it
 * prompts the user to enter the radius of the sphere.
 * Author: budzofficial
 */

#include <math.h>
#include <stdio.h>

#define FRACTION (4.0f / 3.0f) // 4 / 3 result 1 because of truncation

int main(void)
{
	int radius = 0;
	float v = 0;

	printf("Radius: ");
	scanf("%d", &radius);

	v = FRACTION * M_PI * radius * radius * radius;

	printf("Volume of sphere: %.2f\n", v);

	return 0;
}
