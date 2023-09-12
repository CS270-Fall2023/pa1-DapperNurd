/**
 * Ben Bonus
 * PA1
 * main.c
*/
#include "pa1.h"
 // ^ includes <stdio.h>, <stdlib.h>, and <string.h>

int main() {
    int STRING_LENGTH = 256; // Maximum size of input string

    // String input gathering
    printf("Please, enter the string: ");
    char str[STRING_LENGTH]; // Creates array for the initial string, of size STRING_LENGTH
    fgets(str, STRING_LENGTH, stdin);  // Gets the input

    // getToken handling
    int numberOfToken; // Number of individual words in the string
    char **arrayOfTokens; // Array of pointers to char*
    numberOfToken = getTokens(str, &arrayOfTokens);

    // Displaying tokens
    printf("Number of Tokens: %i\n", numberOfToken);
    for(int i = 0; i <= numberOfToken; i++) { // Runs with <= to display all tokens plus NULL at the end
        printf("Token %i: %s\n", i+1, arrayOfTokens[i]);
    }
    
}