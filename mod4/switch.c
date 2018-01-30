/*
 * =====================================================================================
 *
 *       Filename:  branch2.c
 *
 *    Description:  test switch statements
 *           Note: **Only works on integers, single chars
 *
 *        Version:  1.0
 *        Created:  01/30/2018 09:30:21 AM
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

int num = 0;
printf("What is your position?\n");
scanf("%d", num);
switch(num)
  {
      case 1:                   // if (num == 1)
           printf("You won gold\n");
           break;
      case 2:
           printf("You won silver\n"); 
           break;
      case 3:                   // if (num ==3)
           printf("You won bronze\n");
           break;
      
      case 28:   // runs case 28 and 14
      case 14:
           printf("you won a plastic metal\n");
           break;

      default:             // else
           printf("No medal for you\n"); 

   }        // end of switch

printf("Adios amigo\n");

       return 0;


}
