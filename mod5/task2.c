/*
 * =====================================================================================
 *
 *       Filename:  task2.c
 *
 *    Description:  prompt for positive number, stay in loop until psoitve
 *                  number is entered.
 *
 *        Version:  1.0
 *        Created:  02/06/2018 10:05:07 AM
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

    int num = -1;
    while(num < 0)
    {    
    printf("Please enter a positive number\n");
    scanf("%d", &num);
    }


    printf("Done!\n");

    return 0;
}
// Function Definitions


