/* Why is it not a good idea for an identifier to contain more than one
 * adjacent underscore (as in current__balance, for example)?
 *
 * Answer:
 *
 * Readability: Multiple consecutive underscores hurt readability
 * because they are visually difficult to count or distinguish in code.
 *
 * Standard Reservation: Double underscores anywhere (or leading
 * underscores) are reserved by the C/C++ standards for internal
 * compiler definitions, standard library implementation, and macros 
 * (such as __maybe_unused), so defining custom names with __ risks
 * symbol collisions.
 */
