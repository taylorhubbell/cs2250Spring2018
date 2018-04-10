/*
 * =====================================================================================
 *
 *       Filename:  inFile.c
 *
 *    Description:  Read data from files
 *
 *        Version:  1.0
 *        Created:  04/03/2018 09:17:36 AM
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


//constants
#define NUM 4
// const int NUM = 4;


// Function Prototypes

// Main Function
int main()
{

    int data[NUM];
    int* userNums; 
    int arrSize = 0; // User numbers;
    FILE* inFile = NULL;
    printf("Opening file data.txt\n");
    //Open file for reading purposes
    inFile = fopen("data.txt", "r");
    // Test for success
    if(inFile == NULL)
    {
        printf("Could not open file\n");
        return -1;
    }

    //scan file, get number of records 
    fscanf(inFile, "%d", &arrSize);
    printf("arrSize[%d]\n", arrSize);
    // Allocate memory 
    userNums = (*int)malloc(sizeof(int)*arrSize);
    //check you got memory
    if(userNums == NULL)
    {
        printf("Unable to malloc memory\n");
        fclose(inFile);
        return -2;
    }
    //arrsize of the first member of the file - which case is the header
    //record or the number of records in the file  -- first one 5 - you have 5 
    //records
    int i = 1; // skip the header record which has the value number of records
    while( i <= arrSize)
    {
        fscanf(inFile, "%d", &(userNums[i-1]));
                i++;
    }
    
    i=0;
    while(i < arrSize)
    {
        printf("Numers[%d]\n", userNums[i]);
        i++;
    }
    //close and clean memory
    fclose(inFile);
    free(userNums);
    return 0;
}
// Function Definitions


