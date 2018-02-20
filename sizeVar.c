/*
 * =====================================================================================
 *
 *       Filename:  sizeVar.c
 *
 *    Description:  check variable size in bytes
 *
 *        Version:  1.0
 *        Created:  01/25/2018 08:59:59 AM
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
   int num = 1;
   unsigned int unum = 1;
   num = num * 10000;
   // sizeof return size of variable in bytes
   unum = unum * 10000;
   printf("the size of int is %ld\n", sizeof(num));
   printf("the size of int is %ld\n", sizeof(unum));
   printf("Num = [%d]. Unum = [%d]\n", num, unum);
   num *= 10000; // compound operator
   unum *= 10000; 
   printf("num = [%d]. Unum = [%u]\n", num, unum);
   

    return 0;
}
// Function Definitions


