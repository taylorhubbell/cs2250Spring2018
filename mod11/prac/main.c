/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/08/2018 08:56:26 PM
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

int main(void) {
    char object1Info[100] = "Pencil 9 6";
    char object2Info[100] = "Notebook 15 14";
    char object3Info[100] = "Headphones 23 24";

    char object[50] = "";
    int quantity = 0;
    int price = 0;

    sscanf(object2Info, "%s %d %d", object, &quantity, &price);

    printf("%s x%d\n", object, quantity);
    printf("Price: %d", price);

    return 0;
}
