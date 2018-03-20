/*
 * =====================================================================================
 *
 *       Filename:  task2.c
 *
 *    Description: distance 
 *                 time
 *                 velocity
 *
 *        Version:  1.0
 *        Created:  02/22/2018 08:38:36 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Taylor Hubbell (), taylorhubbell@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
const int MtoKM = 1000;
const int MintoHr = 60;
const int SectoMin = 60;

// Function Prototypes
double Velocity(double d, double t);
double KMtoM(double d, double m);
double hrtomin(double t, double min);
// Main Function
int main()
{

   double d, m;
   double t, min;
   

   printf("Please enter a distance in kilometers: \n");
   scanf("%lf", &d);

   printf("Please enter a time (hrs): \n");
   scanf("%lf", &t);

   printf("The velocity is: %lf(km/hr)\n",Velocity(d,t));
   t = hrtomin(t);
   d = KmtoM(d);
printf("New Units\n");
printf("Distance %lf (m)\n", KmtoM(d, m));
printf("Time %lf (min)\n", hrtomin(t,min));
printf("Velocity is %lf \n", Velocity(d,t);
    return 0;
}
// Function Definitions

double Velocity(double d, double t)
{

return (d / t);

}

double KMtoM(double km)
{
return d * MtoKM;
}
double hrtomin(double hr)
{
return t * MintoHr;
}
