/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/20/2018 10:33:48 AM
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
    double weight[5] , sum = 0, av = 0, top = 0;
    for(int i = 0; i < 5; i++)
    {
        printf("Enter weight %d:\n", (i+1));
        scanf("%lf", &weight[i]);
    }
    printf("You entered: ");
    for(int i = 0; i < 5; i++)
    {
        printf("%lf ", weight[i]);
        if(top < weight[i]){
            top = weight[i];
        }
        sum = sum + weight[i];
    }
    av = sum / 5;
    printf("\n\nTotal weight: %lf\n", sum);
    printf("Average weight: %lf\n", av);
    printf("Max weight: %lf\n", top);
      
    return 0;
}
