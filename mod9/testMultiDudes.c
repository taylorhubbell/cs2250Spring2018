/*
 * =====================================================================================
 *
 *       Filename:  testMultiDudes.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/20/2018 09:38:17 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Taylor Hubbell (), taylorhubbell@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include "Dude.h"

// Constants

// Function Prototypes

// Main Function
int main()
{
    SuperDude s1, s2;
    SuperDude ss[ASIZE];
    InitInfoStruct(&s1); // init struct info
    ShowInfoStruct(&s1);// display struct info
    s2 = CopyInfoStruct(&s1);
    ShowInfoStruct(&s2); 
    //initialize array of structs
    printf("\n\nNow array info\n");
    for(int i = 0; i < ASIZE; i++)
    {
    InitInfoStruct(&ss[i]);
    UpdateInfoStruct(&ss[i], i *10)
    ShowInfoStruct(&ss[i]);

    return 0;
}
// Function Definitions


