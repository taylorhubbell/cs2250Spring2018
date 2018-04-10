/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/27/2018 10:40:42 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Taylor Hubbell (), taylorhubbell@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  ITEMTOPURCHASE__INC__
#define  ITEMTOPURCHASE_INC__
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*Structre declarations*/
typedef struct ItemToPurchase
{
    char itemName[128];
    int itemPrice;
    char itemDescription[50];
    int itemQuantity;  
}ItemToPurchase;
/*functions declarations and object of structure*/
void MakeItemBlank(ItemToPurchase* item);
void PrintItemCost(ItemToPurchase item);
void PrintItemDescription(ItemToPurchase item);

#endif 
