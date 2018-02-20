/*
 * =====================================================================================
 *
 *       Filename:  guessNum.c
 *
 *    Description:  guessing game with a do while loop
 *
 *  *
 *        Version:  1.0
 *        Created:  02/13/2018 09:28:51 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Taylor Hubbell (), taylorhubbell@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//1) create a random number between 0-20
//2) ask user to enter a guess 0-10
//3) If the number is < or > tell user
//4) You have 5 chances to guess correct number


const int LEN = 5; //  number of opportunities
const int NUM = 20; // number between 0 & NUM
int guess;
int opp;
char answer = 'y';

int main()
{
    int input[opp];
    srand((int)time(0));
    
    // task: when done ask questions: do you want to keep playing? 'y' or 'n'
    // 'y' = repeats ; 'n' = stop
    printf("Would you like to play a guessing game?");
    scanf("%c", &answer);

     do
     {
         guess = rand() % NUM; // guess num in range


         for(int i = 0 ; i <= LEN; i++)
         {
             printf("please enter a number between 0 - 20");
             scanf("%d", &input[opp]);
             if(input[opp] < guess)
             {
                 printf("\nGo higher\n");
             }
             else if (input[opp] == guess)
             {
                 printf("\nYou got it!. [%d]\n", guess);
                 break;
             }
             else
             {
                 printf("\nGo lower\n");
             }
             opp++;

         }

         printf("You entered: ");

         for(int i = 0 ; i < opp; i++)
         {
             printf(" [%d] ", input[i]);
         }
         // ask question
         printf("Do you want to play again?\n");
         printf("\t'y' for yes\t 'n' for no\n");
         // remember to take the ENTER key into condsideration 
         // (add extra space by " %c")
         scanf(" %c", &answer);
         opp = 0; // reset values
     }
    while(answer != 'n')
    }// end of while answer
    printf("\n Thank you for playing\n");

    return 0;
}
// Function Definitions


