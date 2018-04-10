/*
 * =====================================================================================
 *
 *       Filename:  ShoppingCart.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/27/2018 05:11:12 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Taylor Hubbell (), taylorhubbell@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include "ShoppingCart.h"

ShoppingCart AddItem(ItemToPurchase item, ShoppingCart cart) 
{
    cart.cartItems[cart.cartSize] = item;
    ++cart.cartSize;
    return cart;
}

ShoppingCart RemoveItem(char name[], ShoppingCart cart) 
{
    int i = 0;

    while (strcmp(name, cart.cartItems[i].itemName) != 0)
    {
        ++i;
    }

    for(i = 0; i< cart.cartSize; ++i){
        ItemToPurchase temp = cart.cartItems[i];
        cart.cartItems[i] = temp;
    }
    return cart;
}

ShoppingCart ModifyItem(ItemToPurchase item, ShoppingCart cart)
{
    int quantity;

    printf("Enter the new quantity:");
    scanf("%d", &quantity);

    int i = 0;

    while (strcmp(item.itemName, cart.cartItems[i].itemName) != 0)
    {
        ++i;
    }

    cart.cartItems[i].itemQuantity = quantity;
    return cart;
}

int GetNumItemsInCart(ShoppingCart cart) 
{
    return cart.cartSize;
}

int GetCostOfCart(ShoppingCart cart) 
{
    int total = 0;
    int temp = 0;

    for (int i = 0; i < cart.cartSize; ++i) 
    {
        temp = (cart.cartItems[i].itemQuantity * cart.cartItems[i].itemPrice);
        total = total + temp;
    }
    return total;
}

void PrintTotal(ShoppingCart cart)
{
    int total = 0;
    int temp = 0;

    printf("%s\'s Shopping Cart - %s\n", cart.customerName, cart.currentDate);
    printf("Number of Items: %d\n\n", cart.cartSize);

    if (cart.cartSize == 0) 
    {
        printf("SHOPPING CART IS EMPTY\n\n");
        printf("Total: $0\n\n");
    } else {
        for (int i = 0; i < cart.cartSize; ++i) 
        {
            temp = (cart.cartItems[i].itemQuantity * cart.cartItems[i].itemPrice);
            printf("%s %d @ %d = %d\n", cart.cartItems[i].itemName, cart.cartItems[i].itemQuantity,
                    cart.cartItems[i].itemPrice, temp);
            total = total + temp;
        }
        printf("Total: $%d\n", total);
    }
}

void PrintDescriptions(ShoppingCart cart) 
{

    printf("%s's Shopping Cart - %s\n\n", cart.customerName, cart.currentDate);

    printf("Item Descriptions\n");
    for (int i = 0; i < cart.cartSize; ++i)
    {
        PrintItemDescription(cart.cartItems[i]);
        printf("%s: %s\n", cart.cartItems[i].itemName, cart.cartItems[i].itemDescription);
    }
}
                                                                                                                                      
