/*
 * =====================================================================================
 *
 *       Filename:  guess.c
 *
 *    Description:  guessing a number from 0-9 and win a prize
 *
 *        Version:  1.0
 *        Created:  01/25/2018 10:07:47 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Taylor Hubbell (), taylorhubbell@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h> // for rand(), srand((int)time(0))
#include <time.h> // for time
// Constants

// Function Prototypes

// Main Function
int main()
{
    int input;
    int guess;

      printf("please guess a number from 0 - 9\n");
      scanf("%d", &input);

      srand((int)time(0)); // sets seat
      guess = rand() % 10; // get your number

      printf("You entered [%d] and guess is [%d]\n", input, guess);





    return 0;
}
// Function Definitions


