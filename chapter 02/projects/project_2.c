/* Name: Project 2
 * Description: Write a program that computes the volume of a sphere
 * with a 10-meter radius, using the formula v=4/3r³. Write the fraction
 * 4/3 as 4.0f / 3.0f. (Try writing it as 4/3. What happens?) Hint: C
 * doesn't have an exponentiation operator. so you'll need to multi-
 * ply r by itself twice to compute r³.
 * Author: budzofficial
 */

#include <math.h>
#include <stdio.h>

#define FRACTION (4.0f / 3.0f) // 4 / 3 result 1 because of truncation

int main(void)
{
	int radius = 10;
	float v = 0;

	v = FRACTION * M_PI * radius * radius * radius;

	printf("Volume of sphere: %.2f\n", v);

	return 0;
}
