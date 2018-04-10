/*
 * =====================================================================================
 *
 *       Filename:  pointers.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/27/2018 09:42:59 AM
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

// Constants

// Function Prototypes

// Main Function
int main()
{

    int i = 7;
    int pa[2]; // statistaically allocated
    int* pi = NULL;
    pi = &i;
    printf("i[%d] value that points to pi[%d]\n", i, *pi);
    printf("Enter number of elements: \n");
    scanf("%i", &i);

    //define array with input
    //use malloc: takes one argument Number of bytes 
    //To get number of bytes: sizeof(type)
    //type* = malloc(type*)(sizeof(type)) .. return memory when done
    //free(memory or address, pointer)
    //
    //pointer to an array of integers
    pi = (int*) malloc(i*sizeof(int));
   // int ar[i]; // needs to be dynamically allocated  - phone call to need some NOW
    for(int j = 0; j < i; j++)
    {
        printf("ar[%d] = %d\n", j, ar[j]);
    }
    free(pi)
    
    return 0;
}
// Function Definitions


