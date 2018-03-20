/*
 * =====================================================================================
 *
 *       Filename:  superlib.c
 *
 *    Description:  Super function definitions
 *
 *        Version:  1.0
 *        Created:  03/13/2018 09:37:29 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Taylor Hubbell (), taylorhubbell@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "superlib.h"

// Function Definitions
void StrSpaceToHyphen(char modString[], char sep)
{
    int i = 0;
    for (i=0; i<strlen(modString); ++i)
    {
        if (modString[i] == ' ')
        {
        modString[i] = sep;
        }
    }
    return;

}
int StrCountDigits(char modString[])
{
    int i = 0;
    int total = 0;
    for (i = 0 ; i < strlen(modString); ++i)
    {
        if (isdigit(modString[i]))
        {
            total++;
        }
    }

    return total;
}

