#include <stdio.h>
#include <stdlib.h>
#include"list.h"

struct Node *Head = NULL;

int main()
{

    uint32 list_count = 0;
    char choice;
    do
    {
        printf("(1)-> Insert_Node_At_Beginning\n");
        printf("(2)-> Insert_Node_At_End\n");
        printf("(3)-> Insert_Node_After\n");
        printf("(4)-> Get_Length\n");
        printf("(5)-> Display_All_Nodes\n");
        printf("(6)-> Delete_Node_At_Beginning\n");
        printf("(7)-> Delete_Node\n");
        printf("(8)-> Quit from application \n");
        printf("enter your choice :");
        scanf("%i",&choice);
        switch(choice)
        {
            case 1:
                Insert_Node_At_Beginning(&Head);
                break;
            case 2:
                Insert_Node_At_End(&Head);
                break;
            case 3:
                Insert_Node_After(&Head);
                break;
            case 4:
                list_count =Get_Length(Head);
                printf("length of list = %i \n",list_count);
                break;
            case 5:
                Display_All_Nodes(Head);
                break;
            case 6:
                Delete_Node_At_Beginning(&Head);
                break;
            case 7:
                Delete_Node(Head);
                break;
            case 8:
                printf("Quit from application \n");
                exit(1);
                break;
            default:
                printf("User Choice out of range !!\n");
                break;
        }

    }
    while(1);



    return 0;
}
