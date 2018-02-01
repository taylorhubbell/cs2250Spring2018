/*
 * =====================================================================================
 *
 *       Filename:  compStrings.c
 *
 *    Description:  Compare string values (string operators)
 *
 *        Version:  1.0
 *        Created:  02/01/2018 09:05:17 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Taylor Hubbell (), taylorhubbell@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>     // to compare strings


int main()
{

   char word[51];
   char word2[51];
   printf("Enter a word:\n");
   scanf("%s", word);
   printf("you entered [%s]\n", word);

   //compare strings
   if(strcmp(word, "Hello") == 0)
   {
       printf("You entered hello\n");
   }
   else
   {
       printf("You did not enter hello\n");

   }
   strcpy(word2,word);// word2=word1
   printf("[%s], [%s]\n", word, word2);

    return 0;
}
// Function Definitions


