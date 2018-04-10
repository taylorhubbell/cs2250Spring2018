/*
 * =====================================================================================
 *
 *       Filename:  Dude.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/20/2018 09:38:25 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Taylor Hubbell (), taylorhubbell@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  DUDE__INC__
#define  DUDE_INC__
    <+DETAILED+>
    struct Dude 
{

        int age;
        int weight;
};

typedef struct SuperDude
{
    int age;
    double weight;
    char sex;

}SuperDude;

// #define ASIZE 3;

#endif /* ----- #ifndef DUDE__INC__ ----- */
void ShowInfo(int age, double weight);
// pas a const address instead of the value
// // it is read only you cannot modify values
void ShowInfoStruct(const SuperDude* sd);
void InitInfoStruct(Superdude* sd);
SuperDude CopyInfoStruct(const SuperDude* sd);
void UpdateInfoStruct(SuperDude* sd, int myweight);
#endif 


