/*
 * =====================================================================================
 *
 *       Filename:  task1.c
 *
 *    Description:  create a 10 digit array with random
 *                  numbers between 0-99
 *
 *        Version:  1.0
 *        Created:  02/13/2018 09:06:20 AM
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

const int LEN= 10;

int main()
{

    srand((int)time(0));
    int randArr[LEN];
    //initialize array
    for(int i =0; i < LEN; i++)
    {
     randArr[i] = rand()%100;
    }

    //display array
    for(int i = 0; i < LEN; i++)
    {
       printf("%d is %d\n", i +1, randArr[i]);
    }


    return 0;
}
// Function Definitions


