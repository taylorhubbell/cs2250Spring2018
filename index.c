/*
 * =====================================================================================
 *
 *       Filename:  index.c
 *
 *    Description:  Use index to access string members
 *    
 *
 *        Version:  1.0
 *        Created:  01/25/2018 08:42:52 AM
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

    char firstName[20];
    char lastName[20];

    printf("Please enter your first name: \n");
    scanf("%s", firstName);
    printf("Please enter your last name: \n");
    scanf("%s", lastName);

    printf("Hello %s %s\n", firstName, lastName);
    printf("Your initials are [%c%c]\n", firstName[0], lastName[0]); 
    return 0;

}
// Function Definitions




