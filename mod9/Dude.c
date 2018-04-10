/*
 * =====================================================================================
 *
 *       Filename:  Dude.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/20/2018 09:38:41 AM
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

void ShowInfoStruct(const Superdude* sd)
{
printf("Your age is %d\n", sd->age);
printf("Your weight is %.2lf\n", (sd*).weight);
printf("Your sex is %c\n", sd->sex);

return;
}

// Function Prototypes
void InitInfoStruct(SuperDude* sd)
{
    sd->age = -99;
    sd->weight = -99.0; // when using an address of a structure
    (*sd).sex = 'N'; //      use -> to access members
    return; // (*__) & -> mean the same thing
}












