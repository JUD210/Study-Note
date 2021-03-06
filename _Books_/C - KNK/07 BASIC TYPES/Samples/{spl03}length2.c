/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* length2.c (Chapter 7, page 142) */
/* Determines the length of a message */

#include <stdio.h>

int main() {
    int len = 0;

    printf("Enter a message: ");
    while (getchar() != '\n') {
        len++;
    }
    // Enter a message: 123 56?8!01  456@#$0

    printf("Your message was %d character(s) long.\n", len);
    // Your message was 20 character(s) long.

    /*
     * The length includes spaces and punctuation, but not the new-line
     * character at the end of the message.
     */

    return 0;
}
