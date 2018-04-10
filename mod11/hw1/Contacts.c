/*
 * =====================================================================================
 *
 *       Filename:  Contacts.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/02/2018 08:52:29 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Taylor Hubbell (), taylorhubbell@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include "Contacts.h"

void CreateContactNode(ContactNode* thisNode, char name[], char phoneNum[], ContactNode* nextLoc)
{
    strcpy(thisNode->contactName, name);
    strcpy(thisNode->contactPhoneNum, phoneNum);
    thisNode->nextNodePtr = nextLoc;
    return;
}
                 //inserts a new node after node
void InsertContactAfter(ContactNode* thisNode, ContactNode* newNode)
{
    ContactNode* tmpNext = NULL;
    tmpNext = thisNode->nextNodePtr;
    thisNode->nextNodePtr = newNode;
    newNode->nextNodePtr = tmpNext;
    return;
}
//Return location pointed by nextNodePtr
ContactNode* GetNextContact(ContactNode* thisNode)
{
    return thisNode->nextNodePtr;
}
void PrintContactNode(ContactNode* thisNode)
{
    printf("Name: %s\n",thisNode->contactName );
    printf("Phone number: %s\n",thisNode->contactPhoneNum );
    return;
}
