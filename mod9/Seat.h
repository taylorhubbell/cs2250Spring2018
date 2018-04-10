/*
 * =====================================================================================
 *
 *       Filename:  Seat.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/22/2018 09:29:50 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Taylor Hubbell (), taylorhubbell@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  SEAT__INC__
#define  SEAT_INC__
typedef struct Seat_struct 
{
    char firstName[50];
    char lastName[50];
    int  amountPaid;
} Seat;

#endif /* ----- #ifndef SEAT__INC__ ----- */

