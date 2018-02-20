/*
 * =====================================================================================
 *
 *       Filename:  task3.c
 *
 *    Description:  multiplication tables (FOR loop)
 *
 *        Version:  1.0
 *        Created:  02/08/2018 08:52:11 AM
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

    const int ROW= 10;
    const int COL = 10;
// Function Prototypes

// Main Function
int main()
{

    for(int r = 1; r <= ROW; r++)
    {
        for(int c = 1, c <= COL, c++)
        {
            printf("[%3d"], ROW * COL);
            col++;
        }
        printf("\n");
        printf("r[%d], c[%d]\n", r,c);
    }
    return 0;
}
// Function Definitions


