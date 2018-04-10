/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/20/2018 10:39:40 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Taylor Hubbell (), taylorhubbell@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

int GetNumOfCharacters(char string[]) 
{
    int count = 0; int i;
    for(i=0; string[i]!= '\0' ; i++) 
    {
        count++;
    }
    return count;
}

void OutputWithoutWhitespace(char string[])

{
    int i;
    printf("String with no whitespace: ");
    for(i=0; string[i]!= '\0'; i++ ) 
    {
        if(string[i]!=' '&& string[i]!='\t') 
        {
            printf("%c",string[i]);
        }
    }
    printf("\n");
}

int main()

{
    char string[500];
    printf("Enter a sentence or phrase:\n");
    fgets(string, 500, stdin);
    printf("\nYou entered: %s\n", string);
    printf("\nNumber of characters: %d\n", GetNumOfCharacters(string));
    OutputWithoutWhitespace(string);
    return 0;
}

