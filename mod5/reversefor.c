/*
 * =====================================================================================
 *
 *       Filename:  reversefor.c
 *
 *    Description:  countdown for loop
 *
 *        Version:  1.0
 *        Created:  02/08/2018 09:55:23 AM
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
    char name[] = "Waldo Weber";

    printf("Hi [%s] you are [%lu] bytes long\n", name, sizeof(name));
    
    for (int c = 0; c < sizeof(name); c++)
    {
    printf("[%c]\n", name[c]);
    }

    return 0;
}
// Function Definitions


