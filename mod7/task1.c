/*
 * =====================================================================================
 *
 *       Filename:  task1.c
 *
 *    Description:  Take two numbers (floats) from the user
 *                  Define the following functions.
 *                  1) TheSum: Returns the (int) sum of the 2 numbers
 *                  2)TheProd: Retuns the (double) product of the 2 numbers
 *
 *
 *        Version:  1.0
 *        Created:  02/20/2018 09:34:34 AM
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
int TheSum(double n1, double n2);
double TheProd(double n1, double n2);
// Main Function

int main()
{
    char input;
    char Menu(void);
    double num1 = 3.5;
    double num2 = 4.8;

    input = Menu();
    switch(input)
    {
    
        case 's':
    printf("The sum of %lf + %lf = %d\n",  num1, num2, TheSum(num1, num2));
    break;
    
    case 'p':
    printf("The prod of %lf + %lf = %lf\n",  num1, num2, TheProd(num1, num2));
    break;
    
    default:
    printf("Invalid choice");
    return 0;
    }
}
char Menu (void)
{
   char in = 'n';
   printf("what do you want to do?\n");
   printf("\t s) TheSum\n");
   printf("\t p) TheProd\n");
   scanf(" %c", &in);
   return in;
}
int TheSum(double n1,double n2)
{
return (int)( n1 + n2 );
}

double TheProd(double n1, double n2)
{
    return n1*n2;
}
// Function Definitions


