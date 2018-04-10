/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/20/2018 11:10:17 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Taylor Hubbell (), taylorhubbell@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>
#include<ctype.h>
#include <stdlib.h>
//
 int GetNumOfNonWSCharacters(const char str[500])
    {
        int i, t = 0, len;
        for (i = 0; i < strlen(str); i++)
        {
            if (str[i] == ' ')
                t = t + 1;
        }
        len = strlen(str);
        len = len - t;
        return len;
    }


int GetNumOfWords(char str[500])

{
    int i, j= 0;
    for(i = 0; i < strlen(str); i++)
    {
        if (str[i] == ' ')
            j++;
    }
    return (j+1);
}

void FixCapitalization(char str[500])
{
    char dot = '.';
    int flag = 0;
    int i = 0;

    if(fcap(str[0]))
        str[0] = toupper(str[0]);
    for(i = 0; i <= strlen(str); i++)
    {
        if (str[i] == dot)
            flag = 1;
        if(fcap(str[i]) && flag)
        {
            str[i] = toupper(str[i]);
            flag = 0;
        }
    }
    printf("\nEdited text: %s\n", str);
}

void ReplaceExclamation(char str[500])
{
    int i;
    for(i = 0; i<strlen(str); i++)
    {
        if(str[i] == '!')
        {
            str[i] = '.';
        }
    }
    printf("\nEdited text: %s\n", str);
}

void ShortenSpace(char *str)
{
    
    char *b = str;
    char *f = str + 1;
    while (*f != '\0')
    { 
        if(*f != ' ' || *b != ' ')
            *(++b) = *f;
        f++;
    }
    *(b + 1) = '\0';
    printf("Edited text: %s\n", str);
}


char PrintMenu(char str[500])
{
    char ch;

    do
{
    printf("MENU\n");
    printf("c - Number of non-whitespace characters\n");
    printf("w - Number of words\n");
    printf("f - Fix capitalization\n");
    printf("r - Replace all !'s\n");
    printf("s - Shorten spaces\n");
    printf("q - Quit\n");

    printf("\nChoose an option:\n");
    ch = getchar();

    switch (ch)
    {
        case 'c':
            {
                int a = GetNumOfNonWSCharacters(str);
                printf("Number of non-whitespace characters: %d\n\n", a-1);
                break;
            }

        case 'w':
            {
                int a = GetNumOfWords(str);
                printf("Number of words: %d\n", a);
                break;
            }
        case 'f':
            FixCapitalization(str);
            break;
        case 'r':
            ReplaceExclamation(str);
            break;
        case 's':
            ShortenSpace(str);
            break;
        case 'q':
            {
                exit(0);
            }
        default:
            printf("\nYou have entered a wrong character\n");
            break;
    }
    ch = getchar();
}
            while (ch != 'q');
            return ch;
}

    
int main ()

{
    char str[500];
    printf("Enter a sample text:\n\n");
    fgets(str, 500, stdin);
    printf("You entered: %s\n", str);
    PrintMenu(str);
    return 0;
}


