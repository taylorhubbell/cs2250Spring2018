/*
 * =====================================================================================
 *
 *       Filename:  task4.c
 *
 *    Description:  print first 20 even number
 *
 *        Version:  1.0
 *        Created:  02/08/2018 09:09:03 AM
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
const int Max = 20;
const int Min = 2;

// Function Prototypes

// Main Function
int main()
{
    int num = 0;
    int counter = 0;

    while(1) // forces you to jump into loop
     {
      if ((num % 2 ) ==0 )
      {
          printf("Even number [%d]\n", num);
      }
      else 
      {
          printf("\t Skip odd number [%d]\n", num);
          num++;
          continue;
      }
      num++;
      counter++;
      if(counter == 20)
      {
          break; // leaves loop
      }

     }

      
    return 0;
}
// Function Definitions



