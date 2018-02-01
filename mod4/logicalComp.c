/*
 * =====================================================================================
 *
 *       Filename:  logicalComp.c
 *
 *    Description:  logical comparison
 *
 *        Version:  1.0
 *        Created:  02/01/2018 08:32:27 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Taylor Hubbell (), taylorhubbell@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdbool.h>    // boolean variables

int main()
{
    int grade;
    bool success = true;

    printf("Enter your grade:\n");
    scanf("%d", &grade);

    if(grade >= 90 && grade <= 10)
       { 
           printf("You got an A\n");
       }
    else if(grade >= 80 && grade <= 89) 
       {
    printf("You got a B\n");
       }
    else if(grade >= 70 && grade <= 79) 
       {
    printf("You got a c\n");
       }
    else
       {
    printf("You failed, sorry amigo\n");
    success = false;
       }
   
    if (success)
      {
         printf("Congrats\n");
      }    
    else
      {
         printf("See you next semester\n");
      }    
    return 0;
}

// Function Definitions


