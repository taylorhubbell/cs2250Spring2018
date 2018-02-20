/*
 * =====================================================================================
 *
 *       Filename:  progAssigment4.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/06/2018 05:49:03 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Taylor Hubbell (), taylorhubbell@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

#include<string.h>
 int main()
       {
char serv1[50], serv2[50];
int oilchange=35,tirerotation=19,carwash=7,carwax=12, noservice=0;
noservice = '-';                                     

printf("Davy's auto shop services\n");
printf("Oil change -- $35\n");
printf("Tire rotation -- $19\n");
printf("Car wash -- $7\n");
printf("Car wax -- $12\n\n");
  
  
printf("Select first service:\n");
   scanf("%[^\n]s", serv1);

printf("Select second service: \n");
scanf("%[^\n]s", serv2);
        
printf("\nDavy's auto shop invoice\n");
        
if( strcmp(serv1,"Oil change") == 0 )
        {
        printf("Oil change --$%d\n",oilchange);
        }
 
if( strcmp(serv1,"Tire Rotation") == 0 )
 {
      printf("Tire Rotation --$%d\n",tirerotation);
 }

 if( strcmp(serv1,"Car wash") == 0 ) // serv1 tire
  {
   printf("Car wash --$%d\n",carwash);
  }

if( strcmp(serv1,"Car wax") == 0 )
 {
      printf("Car wax --$%d\n",carwax);
 }

if( strcmp(serv1,"-") == 0 )
 {
      printf("No service --$%d\n", noservice);
 }
/////////////////////////////////////////////////////////////////

if( strcmp(serv2,"Oil change") == 0 )
        {
        printf("Oil change --$%d\n",oilchange);
        }
 
if( strcmp(serv2,"Tire Rotation") == 0 )
 {
      printf("Tire Rotation --$%d\n",tirerotation);
 }

 if( strcmp(serv2,"Car wash") == 0 ) // serv1 tire
  {
   printf("Car wash --$%d\n",carwash);
  }

if( strcmp(serv2,"Car wax") == 0 )
 {
      printf("Car wax --$%d\n",carwax);

if( strcmp(serv2,"-") == 0 )
 {
      printf("No service --$%d\n", noservice);
 }
 }
return 0;


 }
