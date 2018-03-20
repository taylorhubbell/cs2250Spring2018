/*
 * =====================================================================================
 *
 *       Filename:  multiParam.c
 *
 *    Description:  pass multiple parameters to functions
 *                  - use ,cfu
 * 
 *        Version:  1.0
 *        Created:  03/20/2018 08:44:43 AM
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
struct Dude
{
    int age;
    double weight;

}; // DO NOT forget the ;

typedef struct SuperDude
{
    int age;
    double weight;
    char sex;
}SuperDude;

// Function Prototypes
void ShowInfo(int age, double weight);
void ShowInfoStruct(SuperDude sd);

// Main Function
int main()
{
    int a = 17;
    double w = 172.5;
    ShowInfo(a,w);
    
    struct Dude man1;
    man1.age = 32;
    man1.weight = 186.9;
    ShowInfo(man1.age,man1.weight);

    SuperDude man2;
    man2.age = 32;
    man2.weight = 186.9;
    man2.sex = 'M';
    ShowInfoStruct(man2);
    return 0;
}
// Function Definitions

void ShowInfo(int age, double weight)
{
    printf("Your age is [%d]\n", age);
    printf("Your weight is [%.2lf]\n", weight);
    return;

}

// Displays SuperDude information

void ShowInfoStruct(SuperDude sd)
{
    printf("Your age is [%d]\n", sd.age);
    printf("Your weight is [%.2lf]\n", sd.weight);
    printf("Your sex is [%c]\n", sd.sex);
    return;

}
