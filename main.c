/**
 * Ben Bonus
 * PA1
 * main.c
*/
#include "pa1.h"
 // ^ includes <stdio.h>, <stdlib.h>, and <string.h>

int main() {

    // String input gathering
    printf("Please, enter the string: ");
    char **arrayOfTokens, str[56]; // For some reason any number greater that 56 is a segmentation fault; I do not know why.
    fgets(str, 56, stdin); 

    // getToken handling
    int numberOfToken;
    numberOfToken = getTokens(str, &arrayOfTokens);

    // Displaying tokens
    printf("Number of Tokens: %i\n", numberOfToken);
    for(int i = 0; i < numberOfToken+1; i++) { // Runs number+1 to display NULL at the end
        printf("Token %i: %s\n", i+1, arrayOfTokens[i]);
    }
    
}