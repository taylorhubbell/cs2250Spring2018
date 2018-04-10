/*
 * =====================================================================================
 *
 *       Filename:  firstPointer.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/22/2018 09:55:49 AM
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

    int i =5;
    int* pi = NULL;

    printf("Value of i[%14d] address{%p]\n", i , &i);
    printf("Value of pi[%14p] address{%p]\n", pi , &pi);
    return 0;

    pi = &i;
    printf("Value of pi[%14p] address{%p]\n", pi , &pi);

}
// Function Definitions


