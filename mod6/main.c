/*
 * =====================================================================================
 *
 *       Filename:  hw4.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/13/2018 10:54:23 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Taylor Hubbell (), taylorhubbell@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

int main()
{

int baseHeight;
int baseWidth;
int headWidth;

printf("Enter arrow base height:\n");
scanf("%d", &baseHeight);

printf("Enter arrow base width:\n");
scanf("%d", &baseWidth);

printf("Enter arrow head width:\n\n");
scanf("%d", &headWidth);

while(headWidth < baseWidth)
{
printf("INVALID : Head width must be greater than base width\n");
printf("Enter arrow base height: \n");
scanf("%d", &baseHeight);

printf("Enter arrow base width: \n");
scanf("%d", &baseWidth);

printf("Enter arrow head width: \n\n");
scanf("%d", &headWidth);
}

for(int i = 0; i < baseHeight; i++)
{
for(int j =0; j < baseWidth; j++)
    printf("*");
    printf("\n");
}
for(int i = 0; i <= headWidth; i++)
{
    for(int j = 0; j < headWidth - i; j++)
        printf("*");
        printf("\n");
}
    return 0;
}
// Function Definitions



