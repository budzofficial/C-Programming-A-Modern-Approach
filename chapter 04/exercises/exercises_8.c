/* Name: Exercises 8
 * Description: C Programming: A Modern Approach
 * Answer:
 * Yes, it still works. The new expression gives the same result as
 * the original for every input.
 *
 * Write the total as 10k + r, where r = total % 10:
 *	• r = 1 to 9: the original gives 9 - (r - 1) = 10 - r.
 *	The new one gives (10 - r) % 10, and since 10 - r is already
 *	between 1 and 9, the outer % 10 changes nothing. Same result.
 *	• r = 0: the original gives 9 - ((total - 1) % 10) = 9 - 9 = 0.
 *	The new one gives 10 - 0 = 10, and the outer % 10 turns that
 *	into 0. Same result.
 *
 * The outer % 10 is what fixes the multiple-of-10 problem from the
 * last question (Exercises 7), so it does the same job as the
 * "subtract 1 first" trick.
 *
 * There's also a rare edge case where the new version is better. 
 * If every digit entered is 0, then total is 0, and in C (0 - 1) % 10
 * is -1, not 9.
 * Author: budzofficial
 */
