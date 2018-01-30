/*
 * =====================================================================================
 *
 *       Filename:  branch1.c
 *
 *    Description:  basics of branching
 *
 *        Version:  1.0
 *        Created:  01/30/2018 08:51:47 AM
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
    int age = 0;
    int temp = 0;
    printf("How old are you?\n");
    scanf("%d", &age);
    printf("You are %d years old\n", age);
    if(age >= 18) // if true, go inside block -- no semicolon
    {
    
    printf("you can vote\n");

    }
    else // do not use a ()......this is the default or false case
    {
       temp = 18- age;
        printf("you have %d years to vote \n", temp);
    }

    if(age >= 21)
    {
        printf("you can legally drink\n");
    }
    else
    {
     temp = 21 - age;
     printf("you can legally drink in %d years\n", temp);
    }


    if( age >= 65)
    {
        printf("You can retire!\n");
    }

    if( age == 35)
    
    {
    printf("You are at the special age\n");
    }
    
    
    printf("ADIOS AMIGO\n");

    return 0;
}
// Function Definitions




