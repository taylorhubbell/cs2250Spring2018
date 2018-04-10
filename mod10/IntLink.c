/*
 * =====================================================================================
 *
 *       Filename:  IntLink.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/29/2018 10:00:18 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Taylor Hubbell (), taylorhubbell@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

IntNode* IntNode_GetNext(IntNode* thisNode); // return adress of type IntNode*
{
    thisNode->dataVal = dataInit;
    thisNode->nextNodePtr = nextLoc;
    return;
}

void IntNode_InsertAfter (IntNode* thisNode, IntNode* newNode)
{
    IntNode* tmpNext = NULL;

    tmpNext = thisNode->nextNodePtr; // Remember next
    thisNode->nextNodePtr = newNode; // this -- new -- ?
    newNode->nextNodePtr = tmpNext;  // this -- new -- next
    return;
}

// Print dataVal
void IntNode_PrintNodeData(IntNode* thisNode) 
{
    printf("%d\n", thisNode->dataVal);
    return;
}

// Grab location pointed by nextNodePtr
IntNode* IntNode_GetNext(IntNode* thisNode) // return adress of type IntNode*
{
    return thisNode->nextNodePtr;
}

