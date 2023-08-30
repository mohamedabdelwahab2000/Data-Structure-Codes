
#ifndef PLATFORM_TYPES_H
#define PLATFORM_TYPES_H
#include <stdio.h>
#include <stdlib.h>
#include"Platform_Types.h"

typedef struct Node{
    uint32 data ;
    struct Node *next;
};

typedef enum
{
    L_OK,
    L_NOK,
    NULL_POINTER,
    EMPTY,
    FULL,
}status_t;

void Insert_Node_At_Beginning(struct Node **List);
void Insert_Node_At_End(struct Node **List);
void Insert_Node_After(struct Node **List);
void Delete_Node_At_Beginning(struct Node **List);
void Delete_Node(struct Node *List);
void Display_All_Nodes(struct Node *List);
uint32 Get_Length(struct Node *List);


#endif // PLATFORM_TYPES


