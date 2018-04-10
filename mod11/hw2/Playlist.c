/*
 * =====================================================================================
 *
 *       Filename:  Playlist.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/07/2018 10:22:31 AM
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
#include <string.h>

#include "Playlist.h"

void CreatePlaylistNode(PlaylistNode* thisNode, char idInit[],
    char songNameInit[],
    char artistNameInit[],
    int songLengthInit,
    PlaylistNode* nextLoc) 
{
    strcpy(thisNode->uniqueID, idInit);
    strcpy(thisNode->songName, songNameInit);
    strcpy(thisNode->artistName, artistNameInit);
    thisNode->songLength = songLengthInit;
    thisNode->nextNodePtr = nextLoc;
    return;
}
       
void InsertPlaylistNodeAfter(PlaylistNode* thisNode, PlaylistNode* newNode) 
{
    PlaylistNode* tmpNext = NULL;
    tmpNext = thisNode->nextNodePtr;
    thisNode->nextNodePtr = newNode;
    newNode->nextNodePtr = tmpNext;
    return;
}
       
void SetNextPlaylistNode(PlaylistNode* thisNode, PlaylistNode* newNode) 
{
    thisNode->nextNodePtr = newNode;
    return;
}
       
PlaylistNode* GetNextPlaylistNode(PlaylistNode* thisNode) 
{
    return thisNode->nextNodePtr;
}

void PrintPlaylistNode(PlaylistNode* thisNode) 
{
    printf("Unique ID: %s\n", thisNode->uniqueID);
    printf("Song Name: %s\n", thisNode->songName);
    printf("Artist Name: %s\n", thisNode->artistName);
    printf("Song Length (in seconds): %d\n", thisNode->songLength);
    return;
}
