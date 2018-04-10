/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/27/2018 10:41:41 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Taylor Hubbell (), taylorhubbell@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */

#include "ItemToPurchase.h"
 // Function Definitions
 void MakeItemBlank(ItemToPurchase* item)
{
    strcpy((*item).itemName, "none");
    strcpy((*item).itemDescription, "none");
    (*item).itemPrice=0;
    (*item).itemQuantity=0;
}

void PrintItemCost(ItemToPurchase item)
{
    printf("%s %d @ $%d = $%d\n", item.itemName, item.itemQuantity, item.itemPrice, (item.itemPrice*item.itemQuantity));
}

void PrintItemDescription(ItemToPurchase item)
{
    printf("%s: %s.\n", item.itemName, item.itemDescription);
}
