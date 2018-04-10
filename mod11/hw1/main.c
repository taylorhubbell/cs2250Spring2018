/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/02/2018 08:51:34 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Taylor Hubbell (), taylorhubbell@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "Contacts.h"


 // Main Function
 int main()
{
    ContactNode* headObj = NULL;
    ContactNode* nodeObj1 = NULL;
    ContactNode* nodeObj2 = NULL;
    headObj = (ContactNode*)malloc(sizeof(ContactNode));
    nodeObj1 = (ContactNode*)malloc(sizeof(ContactNode));
    nodeObj2 = (ContactNode*)malloc(sizeof(ContactNode));

    char name[100];
    char phNum[100];
    printf("Person 1\n");
    printf("Enter name:\n");
    scanf(" %[^\n]s", name);
    printf("Enter phone number:\n");
    scanf(" %s", phNum);
    CreateContactNode( headObj, name, phNum, nodeObj1);
    printf("You entered: %s, %s\n\n", headObj->contactName, headObj->contactPhoneNum);

    printf("Person 2\n");
    printf("Enter name:\n");
    scanf(" %[^\n]s", name);
    printf("Enter phone number:\n");
    scanf(" %s", phNum);
    CreateContactNode( nodeObj1, name, phNum, nodeObj2);
    printf("You entered: %s, %s\n\n", nodeObj1->contactName, nodeObj1->contactPhoneNum);

    printf("Person 3\n");
    printf("Enter name:\n");
    scanf(" %[^\n]s", name);
    printf("Enter phone number:\n");
    scanf(" %s", phNum);
    CreateContactNode( nodeObj2, name, phNum, NULL);
    printf("You entered: %s, %s\n\n", nodeObj2->contactName, nodeObj2->contactPhoneNum);

    printf("CONTACT LIST\n");
    PrintContactNode(headObj);
    printf("\n");
    PrintContactNode(nodeObj1);
    printf("\n");
    PrintContactNode(nodeObj2);
    printf("\n");

    free(headObj);
    free(nodeObj1);
    free(nodeObj2);


    return 0;
}
                                                                                                                                                                                                                                                                                                                // Function Definitions

