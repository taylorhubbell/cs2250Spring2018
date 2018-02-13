/*
 * =====================================================================================
 *
 *       Filename:  charComp.c
 *
 *    Description:  learn operations on characters
 *
 *        Version:  1.0
 *        Created:  02/01/2018 09:43:43 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Taylor Hubbell (), taylorhubbell@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <ctype.h>    //for character operations


int main()
{
    char num;
    printf("Enter a number 0-9\n");
    scanf("%c", &num);

    if(num == '0')
    {
        printf("You entered 0\n");
    }
    else 
    {
        printf("You enetered non-zero [%c]\n", num);
    }
    if( isalpha(num) !=0 )  // testing for A-Z and a-z
    {
        printf("It is alpha\n");
    }
    else if (isdigit(num) != 0)
    {
        printf("You are [%c]\n", num);
    }

    else
    {
        printf("You are not alpha");
    }







    return 0;
}
// Function Definitions


