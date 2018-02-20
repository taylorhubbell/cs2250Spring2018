/*
 * =====================================================================================
 *
 *       Filename:  HelloFunc.c
 *
 *    Description:  learn to use functions
 *
 *        Version:  1.0
 *        Created:  02/20/2018 08:41:03 AM
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

// Function Prototypes
void Hello(void);
void HelloMany(int num);
int HelloNumMany(void);
int HelloNum(void);
int MySquare(int t);
// Main Function
//
//my square root function - parameters is int t
int MySquare(int t)
{
      
      return t * t;
}

int main()
{
    Hello();
    Hello();
    HelloMany(1);
    int n = HelloNum();
    printf("I got %d from HelloNum()\n", n);

    return 0;
}

// Function Definitions
// Func: Hello
// Prints Message
int HelloNumMany(int num);
{
    for(int i = 0; i < num; i++)
    {
          printf("%d) HelloNumMany\n", i + 1);
          count++;
    }

    return;

}
//Func: HelloMany
//prints message num times
void HelloMany(int num)

{
    for (int i = 0; i < num; i++)
    {
        printf("Weber state great great great!\n");
    }

    return;
}


