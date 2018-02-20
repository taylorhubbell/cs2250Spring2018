/*
 * =====================================================================================
 *
 *       Filename:  for.c
 *
 *    Description:  practice for loop
 *
 *        Version:  1.0
 *        Created:  02/08/2018 08:34:06 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Taylor Hubbell (), taylorhubbell@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    // for loop
    // 1) Initialize your condition
    // 2) Do your work and 
    // 3) Update condition
    // IF still true, continue work
    // ELSE finish loop
    int rounds = 3;
    while(rounds != 0) // not equal to
    {
        printf("Hello there while\n");
        rounds-= 1;
    }
    rounds=4;
    for(int r = 0; r < rounds; r++);
    {
        printf("Hello there for\n");
    }

    return 0;
}
// Function Definitions



