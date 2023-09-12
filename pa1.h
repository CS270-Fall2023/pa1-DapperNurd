/**
 * Ben Bonus
 * PA1
 * pa1.h
*/
#ifndef PA1_H
#define PA1_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * takes a char* string and stores each word, separated by spaces, as char* strings in char*** addresses
 * returns number of words
*/
int getTokens(char* s, char*** args);

#endif