/*
 * =====================================================================================
 *
 *       Filename:  task3.c
 *
 *    Description:  update map positions:
 *                  X-coordinate
 *                  Y-coordinate
 *
 *        Version:  1.0
 *        Created:  02/22/2018 09:17:13 AM
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
const int x = 0;
const int y = 1;
const int DIM = 2;
// Function Prototypes

//  1) initialize your point to (0,0)
void InitPoint(int *xa, int *ya); // pass by reference//* means "I need address"
//  2) Display current position 
void ShowPoint(int x, int y); // pass by value
//  3) Move/Update your point position
//  pass x and y by value
//  pass xa/ya by reference
void MovePoint(int x, int y, int* xa, int* ya); // pass by reference 
// Main Function
int main()
{
   // int point [DIM];
   int x = -99;
   int y = -99;
   ShowPoint(x, y);
   InitPoint(&x, &y);
   ShowPoint(x, y);
   MovePoint(3,5,&x,&y);
   ShowPoint(x, y);
    return 0;
}
// Function Definitions
void InitPoint(int *xa, int *ya)
{
    printf("Begin InitPoint\n");
    ShowPoint(*xa, *ya); // to update the values at a given address
    *xa = 0;             // use the de-reference operator "*"
    *ya = 0; // update values 
    ShowPoint(*xa, *ya);
    printf("End InitPoint\n");
    return;

}

void ShowPoint(int x, int y)
{
     printf(" X-position = [%d]\n", x);
     printf(" Y-position = [%d]\n", y);
     return;
}
void InitPoint(int*xa, int*ya, int newx, int newy)
{
    *xa = newx;
    *ya = newy;
     return;
}

