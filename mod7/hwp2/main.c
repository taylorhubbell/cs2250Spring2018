/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  cd
 *
 *
 *        Version:  1.0
 *        Created:  02/20/2018 11:39:03 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Taylor Hubbell (), taylorhubbell@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include<stdio.h>

int main()
{

    int jersey[5];
    int rating[5];
    char menu;
    int jersey1;
    int rateNum;
    int jersey2;
    int found;
    int i;

    for (i = 0; i<5; i++)
    {
        printf("Enter player %d's jersey number:\n", i + 1);
        scanf("%d",&jersey[i]);
        printf("Enter player %d's rating:\n\n", i+1);
        scanf("%d",&rating[i]);
    }

    printf("ROSTER\n");

    for (i = 0; i<5; i++)
    {
        printf("Player %d -- Jersey number: %d, Rating: %d\n", i+1, jersey[i], rating[i]);
    }
    
        printf("\nMENU\n");
        printf("u - Update player rating\n");
        printf("a - Output players above a rating\n");
        printf("r - Replace player\n");
        printf("o - Output roster\n");
        printf("q - Quit\n\n");
        printf("Choose an option:\n");
        scanf("%c",&menu);

        switch (menu)
        {
            case 'u':
                printf("Enter a jersey number\n");
                scanf("%d", &jersey1);
                printf("Enter a new rating for player\n");
                scanf("%d", &rateNum);
                rateNum = rating[i];
                break;


            case 'a':
                printf("Enter a rating\n");
                scanf("%d", &rateNum);

                for (i = 0; i<=5; i++)
                {
                    if (rating[i] > rateNum)
                    {
                        printf("Player %d -- Jersey number: %d, Rating: %d\n", i+1, jersey[i], rating[i]);
                    }
                }
            case 'r':
                printf("Enter a jersey number:\n");
                scanf("%d", &jersey1);
                printf("Enter a new jersey number:\n");
                scanf("%d", &jersey2);
                printf("Enter a rating for the new player:\n");
                scanf("%d", &rateNum);
                found = 0;
                for ( i=0; i<5; i++)
                {
                    if (jersey[i] == jersey1)
                    {
                        found = 1;
                        jersey[i] = jersey2;
                        rating[i] = rateNum;
                    }
                }
                if (found == 0)
                    printf("Invalid\n");
            case 'o':
                printf("ROSTER\n");

                for (i=0; i<5; i++)
                {
                    printf("Player %d -- Jersey number: %d, Rating: %d\n", i+1, jersey[i], rating[i]);
                }
            case 'q':
                break;
        
    }
   }


