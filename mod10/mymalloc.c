/*
 * =====================================================================================
 *
 *       Filename:  mymalloc.c
 *
 *    Description:  Dynamically allocated memory
 *
 *        Version:  1.0
 *        Created:  03/29/2018 08:41:17 AM
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
// malloc takes number of bytes //malloc(<#bytes>)
//
    int num;
    int* sa = NULL;
    printf("How many number do you need?");
    scanf("%d", &num);
    printf("int is [%lu] bytes\n", sizeof(int)); // lu for long unsigned 
    printf("int array of [%d] bytes is [%lu]\n",num,num * sizeof(int)); // lu for long unsigned 
    
    //cast address to pointer type (*<type>)
    sa = (*int) malloc(num * sizeof(int));

    for(int i = 0; i < num; i++);
    {
       sa[i] = i+10;

    }
    //Display the array

    for(int i = 0; i <num; i++);
    {
     printf("%d element is [%d]\n", i,sa[i]);
    }

    free(sa);
    return 0;
}
// Function Definitions


