/* Name: Exercises 7
 * Description: C Programming: A Modern Approach
 * Answer:
 * The simplified version fails when the total is a multiple of 10.
 * If the total is a multiple of 10, then total % 10 is 0,
 * so the simplified steps give 10 - 0 = 10. A check digit must be
 * a single digit, and the correct answer there is 0.
 *
 * The original handles this because subtracting 1 first shifts the
 * remainders. For a total of 40, (40 - 1) % 10 is 9, and 9 - 9 = 0,
 * which is correct. For totals that aren't multiples of 10, both
 * methods give the same result. For a total of 47, the original gives
 * 9 - (46 % 10) = 3, and the simplified one gives 10 - (47 % 10) = 3.
 *
 * So the two methods agree except in the multiple-of-10 case, where
 * only the original produces a valid digit.
 * Author: budzofficial
 */
