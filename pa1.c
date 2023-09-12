/**
 * Ben Bonus
 * PA1
 * pa1.c
*/
#include "pa1.h"
 // ^ includes <stdio.h>, <stdlib.h>, and <string.h>

int getTokens(char* s, char*** args) {
    int count = 0, startIndex = 0, endIndex = 0, strLength = strlen(s);

    s[strLength-1] = '\0'; // Gets rid of new line at the end

    for(int i = 0; i <= strlen(s); i++) {
        if(s[i] == ' ' || s[i] == '\0') { // Tests if current word is space (or end of string)
            int wordLength = endIndex - startIndex; // Length of current word
            if(wordLength != 0) { // Skip if length is zero (repeating spaces)
                (*args)[count] = malloc(wordLength); // Allocate memory for the word
                strncpy((*args)[count++], s+startIndex, wordLength); // Copy the word to the address in the array
            }

            startIndex = ++endIndex; // Increment endIndex (skip over the space) and move startIndex respectively
        }
        else {
            endIndex++; // Moves to the next char
        }
    }

    (*args)[count] = NULL; // Setting the very end to null
    return count;
}