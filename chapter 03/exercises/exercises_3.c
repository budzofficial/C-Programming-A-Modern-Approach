/* Name: Exercises 3
 * Description: C Programming: A Modern Approach
 * (a) Equivalent. Both skip leading whitespace before reading an
 * integer.
 * (b) Not equivalent. "%d-%d-%d" strictly requires no spaces around
 * the hyphens (e.g., 5-5-5). "%d -%d -%d" allows spaces
 * (e.g., 5 - 5 - 5).
 * (c) Not equivalent. "%f " has a trailing space which will block
 * the program, waiting to consume whitespace until a non-whitespace
 * character is typed.
 * (d) Equivalent. "%f,%f" -> "1.0,2.0" and "%f, %f" -> "1.0, 2.0" the
 * space between ', ' are skipped by scanf.
 * Author: budzofficial
 */
