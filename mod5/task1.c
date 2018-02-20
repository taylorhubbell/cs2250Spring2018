/*
 * =====================================================================================
 *
 *       Filename:  task1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/06/2018 09:37:28 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Taylor Hubbell (), taylorhubbell@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

const int MIN = 1;
const int MAX = 10;

int main()
{
    int row = MIN;
    int col = MIN;

    //Rows
    while(row <= MAX)
    {
        while(col <= MAX)
        {
        printf("[ %d ]", row * col);
            col++;
        }
        printf("\n");
        col = MIN;
        row++;



    }


    return 0;
}
// Function Definitions


