/*
 * =====================================================================================
 *
 *       Filename:  arrays.c
 *
 *    Description:  learn how arrays work
 *
 *        Version:  1.0
 *        Created:  02/13/2018 08:44:27 AM
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
const int LEN = 6; // can change to 60 to get a bunch of garbage memory



int main()
{
    int ar[LEN];
    ar[0] = 33; // first member
    ar[1] = 22; // second member
    ar[2] = 66; // third member
    ar[3] = 99; // fourth memeber

    // printf information
    printf("First value %d\n", ar[0]);
    printf("Fourth value %d\n", ar[3]);
    // iterate over full array

    for(int i = 0; i < LEN; i++)
    {
        if(i % 3 == 0)
        {
            ar[i] = 0;
        }
        else 
        {
            ar[i] = -99;
        }


        //task: initialize index numbers divisible by 3 to 0, else set it to -99
        // initialize to 99

    }

    // initialize the full array

    for(int i = 0; i < LEN; i++)
    {
        printf("The %d value is %d\n", i + 1, ar[i]);
    }

    return 0;
}
// Function Definitions


