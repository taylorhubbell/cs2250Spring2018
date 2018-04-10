/*
 * =====================================================================================
 *
 *       Filename:  multiInput.c
 *
 *    Description:  multiple inputs with scanf
 *
 *        Version:  1.0
 *        Created:  04/03/2018 08:42:22 AM
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

// Constants

// Function Prototypes

void Help(void);
// Main Function
int main()
{
   // int feet, in;
    int hour = 0;
    int min = 0;
    char AmPm[3];
    int rc = 0;
   // printf("Enter feet and inches separated by a space: \n");
   // scanf("%d %d", &feet, &in);
  //  printf("You entered: %d feet and %d inches\n", feet, in);
    printf("Enter the time in this format: HH:MM AM/PM\n");
    rc = scanf("%2d:%2d %2s", &hour, &min, AmPm);
    if (rc != 3);
    {
     Help();
    }
    else
    {
    printf("Your time is: %2d:%2d %s\n", hour, min, AmPm);
    }
    return 0;
}
// Function Definitions

void Help(void)
{
    printf(" Bad Format. Please make sure your time is enetered as shown below:\n");
    printf("HH:MM AM/PM\n");
    return;
}
