/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/20/2018 08:30:15 PM
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

char* AcceptText() 
{
    char* input = malloc(sizeof(char) * 5000);
    printf("Enter a sample text:\n");
    scanf("%[^\n]",input);
     return input;
 }

 char PrintMenu(char *s) 
 {
 char ch;
 char *s = AcceptText();
 printf("MENU\nc - Number of non-whitespace characters\nw - Number of words\nf - Fix capitalization
         r - Replace all !'s\ns - Shorten spaces\nq - Quit\n\nChoose an option: ");
 scanf("%c",&ch);
 switch (ch) 
 {
     case 'c':
         printf("Number of non-whitespace characters: %d\n", GetNumOfNonWSCharacters(s);
                 break;
                 case 'w':
                 printf("Number of words: %d\n", GetNumOfWords(s);
                     break;
                     case 'f':
                     FixCapitalization(s);
                     printf("Edited text: %s\n",s);
                     break;
                     case 'r'
                     ReplaceExclamation(s);                                                                                                                                               printf("Edited text: %s\n",s);
                     break;
                     case 's'
                     ShortenSpace(s);
                     printf("Edited text: %s\n",s);
                     break;
                     }
                     return ch;
                     }

                     int main(){
                     char ch;
                     do {
                     ch = PrintMenu();
                     }while(ch != 'q' || ch != 'Q');
                     }


                     3
                         int GetNumOfNonWSCharacters(char *s) {
                             int i, count = 0;
                             for (i = 0; s[i] != '\0'; i++)
                                 if (s[i] != ' ' && s[i] != '\t')
                                     count ++;
                             return count;
                         }


int GetNumOfWords()
{
    int i, count = 1, flag = 1;
    for (i = 0; s[i] != '\0'; i++)
        if (s[i] == ' ' || s[i] == '\t' || s[i] == '.' || s[i] == '?' || s[i] == '!' || s[i] == ',') 
        {
            if(flag) 
            { 
                count ++;
                flag = 0;
            }
        }
        else
            flag = 1;
    return count;
}

                     
void FixCapitalization(char *s) 
{
    int i, flag = 1;
    for (i = 0; s[i] != '\0'; i++)
        if (s[i] == '.' || s[i] == '?' || s[i] == '!')
            flag = 1
        else if(flag && s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32;
            flag = 0;
        }
}


void ReplaceExclamation(char *s) 
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
        if (s[i] == '!')
            s[i] == '.';

}


void ShortenSpace(char *s) 
{                                                                                                                                                                                                                                                                                                                                                                                                                               int i, j, flag = 1;
    for (i = 0; s[i] != '\0'; i++)
        if (s[i] == ' ')
            if (flag)
                for(j = i--; s[j]!= '\0'; j++)
                    s[j] = s[j+1];
            else
                flag = 1;
        else
            flag = 0;
} 
 
