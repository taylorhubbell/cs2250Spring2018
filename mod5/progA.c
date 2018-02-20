/*
 * =====================================================================================
 *
 *       Filename:  progA.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/06/2018 06:41:04 PM
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
int main()
{
    
     char* services[] = { "Oil change", "Tire rotation", "Car wash", "Car wax" };
    
    
    int price[] = { 35, 19, 7, 12 };
    
    
     int i, total = 0, index1, index2;
    
     char service1[30];
     char service2[30];
     
     printf("Davy's auto shop services\n");
     for (i = 0; i < 4; i++)
     {
     printf("%s -- $%d\n", services[i], price[i]);
     }
      printf("\nSelect first service:");
     scanf(" %[^\n]s", &service1);
     printf("Select second service:");
     scanf(" %[^\n]s", &service2);
    
     printf("\nDavy's auto shop invoice\n");
     for (i = 0; i < 4; i++)
     {
     if (strcmp(service1, services[i]) == 0)
     {
     index1 = i;
     total += price[i];
     }
    
    
     if (strcmp(service2, services[i]) == 0)
     {
     index2 = i;
      total += price[i];
     }
     }
    
    if (strcmp(service1, "-") == 0)
     {
 printf("Service 1: No Service\n");
     }
     else
     {
     printf("Service 1: %s, $%d\n", services[index1], price[index1]);
     }
    //
     if (strcmp(service2, "-") == 0)
     {
     printf("Service 2: No Service\n");
     }
     else
     {
     printf("Service 2: %s, $%d\n", services[index2], price[index2]);
     }
     printf("\nTotal :$%d", total);
    
     return 0;
     }
