/*
 * =====================================================================================
 *
 *       Filename:  random.c
 *
 *    Description:  learn how to use random numnbers
 *
 *        Version:  1.0
 *        Created:  01/25/2018 09:51:46 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Taylor Hubbell (), taylorhubbell@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h> // for rand() functions
#include <time.h> // for srand() function : sets your random sat based on time

// Function Prototypes

// Main Function
int main()
{
    //set your random seat:
    srand((int)time(0));
    printf("A random num[%d]\n", rand()%100);
    printf("A random num[%d]\n", rand()%100);
    printf("A random num[%d]\n", rand()%100);
    printf("A random num[%d]\n", rand()%100);

    
    
    
    return 0;
}
// Function Definitions



