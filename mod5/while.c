/*
 * =====================================================================================
 *
 *       Filename:  while.c
 *
 *    Description:  practice while loops
 *
 *        Version:  1.0
 *        Created:  02/06/2018 08:50:52 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Taylor Hubbell (), taylorhubbell@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
//constants
const int low = 1;
const mint max = 9;

// Constants

// Function Prototypes

// Main Function
int main()
{
    int num = 0;
    unsigned int fact = 1; // makes everything positive only

    printf("Please enter a number from 1 - 9\n");
    printf(" and I will give you the factorial.\n");

    scanf("%d", &num);
    if(num >= low && num <= max)
    {
        printf("Calculating factorial\n");
        while(num > 0)
        {
             printf("Num = [%d]\n", num);
             fact = fact * num;
             num = num - 1; // can also use // num 
             
        }
    }
    else
    {
        printf("You did not follow the instructions\n");
    }
    
    printf("Done. Your factorial is [%u]\n", fact); // u for unsigned (positive number only)
   



    return 0;
}
// Function Definitions


