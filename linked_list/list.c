#include <stdio.h>
#include <stdlib.h>
#include"list.h"


void Insert_Node_At_Beginning(struct Node **List)
{

    struct Node *NewNode = NULL;

    NewNode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter Node Data : ");
    scanf("%i", &NewNode->data);
    if (NULL == *List)
    {
         NewNode->next = NULL;
        *List =NewNode;

    }
    else
    {
        NewNode->next = *List;
        *List =NewNode;
    }

}
void Insert_Node_At_End(struct Node **List)
{
    struct Node *NewNode = NULL;
    struct Node *Temp = *List;
    NewNode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter Node Data : ");
    scanf("%i", &NewNode->data);
    if (NULL == *List)
    {
        Insert_Node_At_Beginning(&List);
    }
    else
    {
        while(Temp->next != NULL)
        {
            Temp = Temp->next;
        }

        Temp->next =NewNode;
        NewNode->next = NULL;


    }

}
void Insert_Node_After(struct Node **List)
{
    struct Node *NewNode = NULL;
    struct Node *Temp = *List;
    uint32 pos = 0,length = 0,node_counter = 1;
    printf("Enter Node Position (First node is position = 1): ");
    scanf("%i", &pos);
    length = Get_Length(*List);
    NewNode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter Node Data : ");
    scanf("%i", &NewNode->data);
    printf("length = %i \n",length);
    printf("pos = %i \n",pos);
    if (NULL == *List)
    {
        Insert_Node_At_Beginning(&List);
    }
    else
    {
        if (length < pos)
        {
            printf("the node is out the list \n");
        }
        else
        {
            while(node_counter != pos)
            {
                node_counter++;
                Temp = Temp->next;
            }

            NewNode->next = Temp->next;
            Temp->next = NewNode;
        }
    }
}
void Delete_Node_At_Beginning(struct Node **List)
{
    struct Node *Temp = *List;
    *List = Temp->next;
    free(Temp);

}
void Delete_Node(struct Node *List)
{
    struct Node *NewNode = NULL;
    struct Node *Temp = List;
    uint32 pos = 0,length = 0,node_counter = 1;
    printf("Enter Node Position (First node is position = 1): ");
    scanf("%i", &pos);
    length = Get_Length(List);
    if (length < pos)
    {
        printf("the node is out the list \n");
    }
    else
    {
        while(node_counter != (pos-1))
        {
            node_counter++;
            Temp = Temp->next;
        }

        NewNode = Temp->next;
        Temp->next = NewNode->next;
        free(NewNode);
    }

}
void Display_All_Nodes(struct Node *List)
{
    struct Node *Temp = List;
    printf("list data : ");
    while(Temp != NULL)
    {
        printf("%i\t",Temp->data);
        Temp = Temp->next;
    }
    printf("\n");
}
uint32 Get_Length(struct Node *List)
{
    struct Node *Temp = List;
    uint32 counter = 0;

    while(Temp != NULL)
    {
        counter++;
        Temp = Temp->next;
    }
    return counter;

}
